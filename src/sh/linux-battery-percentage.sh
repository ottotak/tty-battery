upower -i $(upower -e | grep 'BAT') | grep percentage | sed -e "s/[^0-9]//g"
