# Projekt PO
## Import do visuala
Coś nie działa przy względnych ścieżkach do plików i trzeba je dodać samemu żeby działało.
W ustawieniach projektu (Alt+F7) w:
- __VC++ Directories > Include Directories__ zmieniamy *C:\\Users\Guślarz\Documents\PO\Base\PDCurses* na swoją lokalizacje PDCurses (pobrane z tego repo)
- __VC++ Directories > Library Directories__ to samo tylko PDCurses\wincon
## Info
- Coś nie działa na 64-bitowej wersji, nie chce mi się tego ogarniać skoro 32-bit działa
- Będzie jeszcze trzeba rozbudować to BaseTool i BaseBackend
