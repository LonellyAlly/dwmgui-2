# Compilation
$ ls
dmenu  dwm  dwmblocks  st
$ cd dwm
$ make clean install
$ cd ../dmenu
$ make clean install
$ cd ../dwmblocks
$ make clean install
$ cd ../st
$ make clean install

# Startx setup (.xinitrc)
xset r rate 200 35 &
output eDP-1 --mode 1920x1080
dwmblocks &
display -window root ~/wallpaper/location &
exec dwm;
