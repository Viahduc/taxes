# taxes
Permet de calculer la taxe et le tip au Québec.

Pour Linux seulement.
# Installation
S'assurer d'avoir ncurses et git

Dans un Terminal:

Sudo pacman -S ncurses git

git clone https://github.com/Viahduc/taxes/

cd taxes

gcc taxes.c -o taxes -lncurses

sudo mv taxes /usr/bin/

# Utiliser le programmes
Dans un Terminal:

taxes
