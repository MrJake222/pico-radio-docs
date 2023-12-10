module buttons() {    
  color("#00FFC0")
  for (dx = [-gp*3, 0, gp*3])
    for (dy = [-gp*3, 0, gp*3])
      translate([dx, 0, dy])
        cylinder_vert(h=meta_W,
                      r=(dx*dy==0 ? btn_R
                                  : btn_R_screw));
} 
