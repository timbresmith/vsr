		
	#include "conga_assign_Mnk_Sta_con.h"
	
		int conga_assign_Mnk_Sta_switch[167] = {
	 
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	0,  
	73,  
	1,  
	2,  
	3,  
	73,  
	73,  
	4,  
	73,  
	73,  
	73,  
	5,  
	6,  
	7,  
	73,  
	73,  
	73,  
	73,  
	73,  
	8,  
	73,  
	73,  
	9,  
	73,  
	10,  
	11,  
	12,  
	13,  
	14,  
	15,  
	16,  
	17,  
	18,  
	73,  
	73,  
	19,  
	73,  
	73,  
	73,  
	73,  
	20,  
	21,  
	22,  
	23,  
	73,  
	24,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	25,  
	73,  
	26,  
	27,  
	73,  
	28,  
	73,  
	29,  
	30,  
	73,  
	73,  
	73,  
	73,  
	31,  
	32,  
	73,  
	33,  
	34,  
	73,  
	73,  
	35,  
	36,  
	73,  
	73,  
	37,  
	38,  
	73,  
	73,  
	39,  
	73,  
	40,  
	41,  
	73,  
	73,  
	42,  
	73,  
	73,  
	43,  
	73,  
	73,  
	44,  
	73,  
	73,  
	45,  
	73,  
	73,  
	46,  
	73,  
	73,  
	47,  
	73,  
	73,  
	48,  
	73,  
	49,  
	73,  
	50,  
	73,  
	51,  
	73,  
	73,  
	52,  
	73,  
	73,  
	53,  
	73,  
	54,  
	73,  
	55,  
	73,  
	56,  
	73,  
	57,  
	73,  
	73,  
	58,  
	73,  
	73,  
	59,  
	60,  
	73,  
	73,  
	61,  
	73,  
	62,  
	73,  
	63,  
	73,  
	73,  
	73,  
	64,  
	73,  
	73,  
	65,  
	73,  
	66,  
	67,  
	73,  
	68,  
	73,  
	73,  
	69,  
	70,  
	73,  
	73,  
	71,  
	72, 
	};
	
	
		int conga_assign_Mnk_Sta_base_index[9] = { 9,10,11,12,13,14,26,27,28, };
	
	
	void conga_assign_Mnk_Sta_fn(int _idx, double * a, double *r){
	
		conga_assign_Mnk_Sta_func[ conga_assign_Mnk_Sta_switch [_idx] ](a, r);
	}


	

	