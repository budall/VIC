#include <stdio.h>
#include <stdlib.h>
#include <vicNl.h>

void initialize_veg (veg_var_struct      **veg_var,
		     veg_con_struct       *veg_con,
                     global_param_struct   gp)
/**********************************************************************
  initialize_veg		Dag Lohmann	 January 1996

  This routine initailizes the vegetation variable array.

  Modifications:
  07-13-98 modified to initialize vegetation structure for all 
           defined elevation bands                                 KAC

**********************************************************************/
{
  extern option_struct   options;
  extern veg_lib_struct *veg_lib;

  int i, j;

  for ( i = 0 ; i < veg_con[0].vegetat_type_num ; i++) {
    for ( j = 0 ; j < options.SNOW_BAND ; j++ ) {
      veg_var[i][j].Wdew = 0.0;
      veg_var[i][j].throughfall = 0.0;
    }
  }
}
