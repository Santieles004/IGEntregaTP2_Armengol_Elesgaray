#include "Cascarudo.h"
#include <cstdlib>

Cascarudo::Cascarudo(int x, int y) 
    : m_x(x), m_y(y), m_velocidad(0.2f + static_cast<float>(rand() % 100) / 500.0f), 
      m_vida(3), m_muerto(false) {}

void Cascarudo::update() {
    // Hacer que los cascarudos caigan como la nieve
    m_y += m_velocidad;
    
    // Si llegan al fondo, reiniciar arriba en posición aleatoria
    if (m_y >= 39) {
        m_x = rand() % 116 + 2;
        m_y = 1;
        m_velocidad = 0.2f + static_cast<float>(rand() % 100) / 500.0f;
    }
}

void Cascarudo::draw() {
    // Dibujar cascarudo (3x2)
    mvaddch(static_cast<int>(m_y), static_cast<int>(m_x), ACS_ULCORNER);
    mvaddch(static_cast<int>(m_y), static_cast<int>(m_x) + 1, ACS_HLINE);
    mvaddch(static_cast<int>(m_y), static_cast<int>(m_x) + 2, ACS_URCORNER);
    mvaddch(static_cast<int>(m_y) + 1, static_cast<int>(m_x), ACS_LLCORNER);
    mvaddch(static_cast<int>(m_y) + 1, static_cast<int>(m_x) + 1, ACS_HLINE);
    mvaddch(static_cast<int>(m_y) + 1, static_cast<int>(m_x) + 2, ACS_LRCORNER);
}

void Cascarudo::recibirDano(Eternauta::Arma arma) {
    if (arma == Eternauta::Arma::REVOLVER) {
        m_vida -= 1;  // 3 disparos para eliminar
    } else if (arma == Eternauta::Arma::ESCOPETA) {
        m_vida -= 3;  // 1 disparo para eliminar
    } else if (arma == Eternauta::Arma::PALO) {
        m_vida -= 1;  // 3 golpes para eliminar
    }
    
    if (m_vida <= 0) {
        m_muerto = true;
    }
}

bool Cascarudo::colisionCon(int x, int y) const {
    // Hitbox solo en la cabeza (centro superior)
    return (x >= static_cast<int>(m_x) && x <= static_cast<int>(m_x) + 2 && 
            y >= static_cast<int>(m_y) && y <= static_cast<int>(m_y) + 1);
}

bool Cascarudo::estaMuerto() const {
    return m_muerto;
}