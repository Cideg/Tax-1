// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"                                                                                 \n"
" TTTTTTTTTTTTTTTTTTTTTTT            AAA                  XXXXXXX       XXXXXXX   \n"
" T:::::::::::::::::::::T           A:::A                 X:::::X       X:::::X   \n"
" T:::::::::::::::::::::T          A:::::A                X:::::X       X:::::X   \n"
" T:::::TT:::::::TT:::::T         A:::::::A               X::::::X     X::::::X   \n"
" TTTTTT  T:::::T  TTTTTT        A:::::::::A              XXX:::::X   X:::::XXX   \n"
"         T:::::T               A:::::A:::::A                X:::::X X:::::X      \n"
"         T:::::T              A:::::A A:::::A                X:::::X:::::X       \n"
"         T:::::T             A:::::A   A:::::A                X:::::::::X        \n"
"         T:::::T            A:::::A     A:::::A               X:::::::::X        \n"
"         T:::::T           A:::::AAAAAAAAA:::::A             X:::::X:::::X       \n"
"         T:::::T          A:::::::::::::::::::::A           X:::::X X:::::X      \n"
"         T:::::T         A:::::AAAAAAAAAAAAA:::::A       XXX:::::X   X:::::XXX   \n"
"       TT:::::::TT      A:::::A             A:::::A      X::::::X     X::::::X   \n"
"       T:::::::::T     A:::::A               A:::::A     X:::::X       X:::::X   \n"
"       T:::::::::T    A:::::A                 A:::::A    X:::::X       X:::::X   \n"
"       TTTTTTTTTTT   AAAAAAA                   AAAAAAA   XXXXXXX       XXXXXXX   \n";

const std::string nonWindowsAsciiArt = 
"\n                                         \n"
" ██████████████╗    ███████╗   ███╗  ███╗  \n"
" ██████████████║   ███╔══███╗  ███║  ███║  \n"
" ╚════████╔════╝   ███║  ███║  ╚███╗███╔╝  \n"
"      ████║        █████████║   ╚█████╔╝   \n"
"      ████║        █████████║    █████║    \n"
"      ████║        ███╔══███║   ███╔███╗   \n"
"      ████║        ███║  ███║  ███╔╝ ███╗  \n"
"      ████║        ███║  ███║  ███║  ███║  \n"
"      ╚═══╝        ╚══╝  ╚══╝  ╚══╝  ╚══╝  \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
