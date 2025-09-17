#include <cstring>
#include "Pantalla.h"
#include <iostream>
#include <chrono>
#include <thread>

void Pantalla::mostrarIntro() {
    erase();
    
    // Pantalla 1: Título
    const char* titulo[] = {
       "                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                     .;odkOOxo:'                                                  ",  
"                                                   ;kNNNNNNNNNNNKd'                                               ",  
"                                                 .ONNNNNNNNNNXXXXXNx.                                             ",  
"                                                .KXXXNXkdddddddddxxxl                                             ",  
"                                                kXNNXloOkl;'......':ok:                                           ",  
"                                                XNN0:0c..ldkOOxx00ko. ck                                          ",  
"                                              .xl,X'K'  .  . .Oc.. .   O;                                         ",  
"                                              ;XX;,.K ck0x,..oXx ccol  x;                                         ",  
"                                               kXd  0':NXKcxXkKN,dXK, .K                                          ",  
"                                   .            ..l'.O:'0XXO.okk'ck  ;O.                                          ",  
"                              'NNNNN, xNl       .XoO. ;dlllo:oc  ';ld:                                            ",  
"                              dNk... .XX.        :k'x.  .'ccccccc;.                                               ",  
"                             .XNXKk  lXO        do,x;,.  ,, ,dOOkd,                                               ",  
"                             cNK...  KN:    .;dOK;cxKxl' l.cKc:;;cK,                                              ",  
"                             0NKOO: 'NNOOx   ;odlxOlc, ..  :xx. .'c.  lc.                                         ",  
"                             ;;;;;. .;;;;.         .,cl.    .;;;;.      .                                         ",  
"                   .','''. .,,,,,,. .,,,,,. .,,,,,'    ,,,  .,,.    ',;,.   .,,  .,,. ,,,,,,;,  ';;;.            ",  
"                   0NNNXXo kNNNNNN,.XNNNNN: dNNNNNNX. 'NNN, cNN,  ,XNXXXX   0NK  xNN..NXNXXXNd 'NNNXX            ",  
"                  ;NNo...  .;NXd.. cXN:...  KNO  xNN. oNNNd kNX   0XK.KNK  .NNo  KX0  .'XNk..  ONKKNN.           ",  
"                  ONX.      dNN.   0NX     'NN: .XNk  KNNNK.NNk  :XNl NX0  :NX, .NXo   cXN:   :NX:kNN'           ",  
"                 'NXX00O   .XX0   ,XNX0Kk  oNN0OKXd. 'NNNNNdNN:  KNX..NNk  kNX  cXN,   xXX.  .KN0 xNN;           ",  
"                 dXNdoo:   :NXc   dXXdll,  KN0dkNX:  lNNcNNNNX. :NNx.,NNx  XNx  ONX    XX0   oNN:.dNNl           ",  
"                .XX0       kNX.   XXK     'XNc .NNO  0NK 0NNNO  KNNXNNNNo ,NN: .NNk   .XNl  .NNNNNNNNd           ",  
"                lNN:      .NNk   ,XXl     oNN. ;NNo .NNo cXNXc :XXd''oXNl oNN;.cXX:   lNN,  kNNd::xNNk           ",  
"                KNNXXXX;  oNN;   xXXXXXX  KNK  xNN' cNN, .XXN. KXX.  cXX: cXXNXNXo    OXX  ,NNK   :NNK           ",  
"               .ccccccc   ;c:    :::;;;,  ;;.  ';;  .,,   ',' .',.   .''.  .,;;'      ,,'  .,,.   .;;;           ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
        "                           Presiona ENTER para continuar"
    };

    int lineasTitulo = sizeof(titulo) / sizeof(titulo[0]);
    mostrarASCII(titulo, lineasTitulo, 5);
    esperarEnter();
    
    // Pantalla 2: Introducción
    const char* intro1[] = {
        "Buenos Aires, 1963. Una noche como cualquier otra,",
        "Juan Salvo y sus amigos juegan al truco cuando...",
        "",
        "De repente, una peculiar nevada toxica cubre la ciudad.",
        "Quienes se exponen a ella mueren instantaneamente.",
        "",
        "Solo unos pocos logran refugiarse a tiempo.",
        "Pero esto es solo el comienzo de una pesadilla...",
        "",
        "Presiona ENTER para continuar"
    };

    int lineasIntro1 = sizeof(intro1) / sizeof(intro1[0]);
    erase();
    mostrarASCII(intro1, lineasIntro1, 5);
    esperarEnter();
    
    // Pantalla 3: Continuación
    const char* intro2[] = {
        "Pronto descubriran que esta no es una invasion comun.",
        "Seres extraterrestres llamados 'cascarudos' y humanos",
        "controlados mentalmente por 'El Mano' amenazan con",
        "exterminar a toda la humanidad.",
        "",
        "Juan Salvo, ahora conocido como El Eternauta,",
        "debera luchar por su supervivencia y la de sus amigos.",
        "",
        "Presiona ENTER para comenzar"
    };

    int lineasIntro2 = sizeof(intro2) / sizeof(intro2[0]);
    erase();
    mostrarASCII(intro2, lineasIntro2, 5);
    esperarEnter();
}

int Pantalla::mostrarMenu() {
    erase();
    box(stdscr, 0, 0);
    
    const char* titulo[] = {
       "                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                     .;odkOOxo:'                                                  ",  
"                                                   ;kNNNNNNNNNNNKd'                                               ",  
"                                                 .ONNNNNNNNNNXXXXXNx.                                             ",  
"                                                .KXXXNXkdddddddddxxxl                                             ",  
"                                                kXNNXloOkl;'......':ok:                                           ",  
"                                                XNN0:0c..ldkOOxx00ko. ck                                          ",  
"                                              .xl,X'K'  .  . .Oc.. .   O;                                         ",  
"                                              ;XX;,.K ck0x,..oXx ccol  x;                                         ",  
"                                               kXd  0':NXKcxXkKN,dXK, .K                                          ",  
"                                   .            ..l'.O:'0XXO.okk'ck  ;O.                                          ",  
"                              'NNNNN, xNl       .XoO. ;dlllo:oc  ';ld:                                            ",  
"                              dNk... .XX.        :k'x.  .'ccccccc;.                                               ",  
"                             .XNXKk  lXO        do,x;,.  ,, ,dOOkd,                                               ",  
"                             cNK...  KN:    .;dOK;cxKxl' l.cKc:;;cK,                                              ",  
"                             0NKOO: 'NNOOx   ;odlxOlc, ..  :xx. .'c.  lc.                                         ",  
"                             ;;;;;. .;;;;.         .,cl.    .;;;;.      .                                         ",  
"                   .','''. .,,,,,,. .,,,,,. .,,,,,'    ,,,  .,,.    ',;,.   .,,  .,,. ,,,,,,;,  ';;;.            ",  
"                   0NNNXXo kNNNNNN,.XNNNNN: dNNNNNNX. 'NNN, cNN,  ,XNXXXX   0NK  xNN..NXNXXXNd 'NNNXX            ",  
"                  ;NNo...  .;NXd.. cXN:...  KNO  xNN. oNNNd kNX   0XK.KNK  .NNo  KX0  .'XNk..  ONKKNN.           ",  
"                  ONX.      dNN.   0NX     'NN: .XNk  KNNNK.NNk  :XNl NX0  :NX, .NXo   cXN:   :NX:kNN'           ",  
"                 'NXX00O   .XX0   ,XNX0Kk  oNN0OKXd. 'NNNNNdNN:  KNX..NNk  kNX  cXN,   xXX.  .KN0 xNN;           ",  
"                 dXNdoo:   :NXc   dXXdll,  KN0dkNX:  lNNcNNNNX. :NNx.,NNx  XNx  ONX    XX0   oNN:.dNNl           ",  
"                .XX0       kNX.   XXK     'XNc .NNO  0NK 0NNNO  KNNXNNNNo ,NN: .NNk   .XNl  .NNNNNNNNd           ",  
"                lNN:      .NNk   ,XXl     oNN. ;NNo .NNo cXNXc :XXd''oXNl oNN;.cXX:   lNN,  kNNd::xNNk           ",  
"                KNNXXXX;  oNN;   xXXXXXX  KNK  xNN' cNN, .XXN. KXX.  cXX: cXXNXNXo    OXX  ,NNK   :NNK           ",  
"               .ccccccc   ;c:    :::;;;,  ;;.  ';;  .,,   ',' .',.   .''.  .,;;'      ,,'  .,,.   .;;;           ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
"                                                                                                                  ",  
    };

    // Calcular la cantidad de líneas del ASCII art
    int lineasTitulo = sizeof(titulo) / sizeof(titulo[0]);
    
    // Mostrar ASCII art desde la fila 2
    mostrarASCII(titulo, lineasTitulo, 2);
    
    // Posición de las instrucciones justo debajo del ASCII art
    int yMenu = 2 + lineasTitulo;  // empieza justo después del arte
    
    // Imprimir menú centrado
    mvprintw(yMenu,     (COLS/2) - 5, "1. Jugar");
    mvprintw(yMenu + 1, (COLS/2) - 5, "2. Salir");
    mvprintw(yMenu + 3, (COLS/2) - 15, "Selecciona una opción: ");
    refresh();
    
    int opcion = getch();
    while (opcion != '1' && opcion != '2') {
        opcion = getch();
    }
    
    return (opcion == '1') ? 1 : 2;
}

void Pantalla::mostrarGameOver(int puntaje) {
    erase();
    box(stdscr, 0, 0);
    
    const char* gameOver[] = {
        "   _____                         ____                 ",
        "  / ____|                       / __ \\                ",
        " | |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __ ",
        " | | |_ |/ _` | '_ ` _ \\ / _ \\ | |  | \\ \\ / / _ \\ '__|",
        " | |__| | (_| | | | | | |  __/ | |__| |\\ V /  __/ |   ",
        "  \\_____|\\__,_|_| |_| |_|\\___|  \\____/  \\_/ \\___|_|   ",
        ""
    };

    int lineasGameOver = sizeof(gameOver) / sizeof(gameOver[0]);
    mostrarASCII(gameOver, lineasGameOver, 5);
    
    mvprintw(5 + lineasGameOver + 2, (COLS/2) - 10, "Puntuación final: %d", puntaje);
    mvprintw(5 + lineasGameOver + 5, (COLS/2) - 12, "¿Volver a jugar? (S/N)");
    
    refresh();
}

void Pantalla::mostrarNivelCompletado(int nivel, int puntaje) {
    erase();
    box(stdscr, 0, 0);
    
    mvprintw(10, 50, "NIVEL %d COMPLETADO", nivel);
    mvprintw(12, 50, "Puntaje: %d", puntaje);
    
    if (nivel < 3) {
        mvprintw(15, 45, "Preparándose para el siguiente nivel...");
    } else {
        mvprintw(15, 45, "Felicidades, has completado el juego.");
    }
    
    mvprintw(20, 45, "Presiona ENTER para continuar");
    
    refresh();
    esperarEnter();
}

void Pantalla::mostrarFinal() {
    erase();
    box(stdscr, 0, 0);
    
    const char* final[] = {
        "FELICITACIONES",
        "",
        "Has logrado sobrevivir a la invasion y derrotar a El Mano.",
        "Pero la lucha apenas comienza...",
        "",
        "Juan Salvo se convertira en El Eternauta,",
        "viajero de la eternidad, luchando por la libertad",
        "a traves de infinitos mundos y dimensiones.",
        "",
        "Esta es solo una de sus muchas historias.",
        "",
        "Presiona ENTER para volver al menu principal"
    };

    int lineasFinal = sizeof(final) / sizeof(final[0]);
    mostrarASCII(final, lineasFinal, 5);
    
    refresh();
    esperarEnter();
}

void Pantalla::mostrarASCII(const char* asciiArt[], int lineas, int y) {
    for (int i = 0; i < lineas; i++) {
        mvprintw(y + i, (COLS - strlen(asciiArt[i])) / 2, "%s", asciiArt[i]);
    }
    refresh();
}

void Pantalla::esperarEnter() {
    while (getch() != '\n') {
        // Esperar hasta que se presione ENTER
    }
}