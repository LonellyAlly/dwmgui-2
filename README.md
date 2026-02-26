# Compilation
$ ls <br/>
dmenu  dwm  dwmblocks  st <br/>
$ cd dwm <br/>
$ make clean install <br/>
$ cd ../dmenu <br/>
$ make clean install <br/>
$ cd ../dwmblocks <br/>
$ make clean install <br/>
$ cd ../st <br/>
$ make clean install <br/>
$ chmod +x ./dwmblocks-scripts/* <br/>
$ mkdir -p ~/.local/bin/dwmblocks <br/>
$ cp -r ./dwmblocks-scripts/* ~/.local/bin/dwmblocks <br/>
# Startx setup (.xinitrc) 
xset r rate 200 35 & <br/> 
output eDP-1 --mode 1920x1080 <br/>
dwmblocks & <br/>
display -window root ~/wallpaper/location & <br/>
exec dwm; <br/>
