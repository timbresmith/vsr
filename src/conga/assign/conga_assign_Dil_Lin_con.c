		
	#include "conga_assign_Dil_Lin_con.h"
	
		int conga_assign_Dil_Lin_switch[167] = {
	 
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	0,  
	73,  
	1,  
	73,  
	73,  
	73,  
	2,  
	73,  
	73,  
	73,  
	73,  
	3,  
	73,  
	73,  
	73,  
	4,  
	5,  
	73,  
	73,  
	6,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	73,  
	7,  
	73,  
	8,  
	9,  
	10,  
	11,  
	73,  
	73,  
	73,  
	73,  
	12,  
	73,  
	13,  
	14,  
	15,  
	16,  
	17,  
	18,  
	19,  
	73,  
	20,  
	73,  
	73,  
	21,  
	73,  
	22,  
	73,  
	73,  
	23,  
	24,  
	25,  
	73,  
	73,  
	73,  
	26,  
	73,  
	73,  
	27,  
	28,  
	73,  
	73,  
	73,  
	29,  
	73,  
	73,  
	73,  
	30,  
	73,  
	31,  
	73,  
	73,  
	32,  
	33,  
	73,  
	34,  
	35,  
	73,  
	36,  
	37,  
	73,  
	38,  
	39,  
	73,  
	40,  
	73,  
	73,  
	41,  
	73,  
	73,  
	42,  
	43,  
	73,  
	44,  
	73,  
	73,  
	73,  
	45,  
	73,  
	46,  
	47,  
	73,  
	48,  
	49,  
	73,  
	50,  
	73,  
	51,  
	73,  
	52,  
	73,  
	53,  
	73,  
	54,  
	55,  
	73,  
	56,  
	57,  
	73,  
	73,  
	58,  
	59,  
	73,  
	60,  
	73,  
	61,  
	73,  
	62,  
	73,  
	63,  
	73,  
	64,  
	65,  
	73,  
	66,  
	73,  
	73,  
	67,  
	73,  
	68,  
	69,  
	73,  
	73,  
	70,  
	71,  
	73,  
	72, 
	};
	
	
		int conga_assign_Dil_Lin_base_index[9] = { 1,2,3,19,20,21,22,23,24, };
	
	
	void conga_assign_Dil_Lin_fn(int _idx, double * a, double *r){
	
		conga_assign_Dil_Lin_func[ conga_assign_Dil_Lin_switch [_idx] ](a, r);
	}


	

	