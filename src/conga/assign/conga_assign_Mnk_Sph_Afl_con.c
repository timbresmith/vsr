		
	#include "conga_assign_Mnk_Sph_Afl_con.h"
	
		int conga_assign_Mnk_Sph_Afl_switch[167] = {
	 
	0,  
	82,  
	82,  
	82,  
	82,  
	82,  
	82,  
	1,  
	82,  
	2,  
	3,  
	4,  
	82,  
	82,  
	5,  
	82,  
	6,  
	82,  
	7,  
	8,  
	9,  
	82,  
	82,  
	10,  
	82,  
	82,  
	11,  
	82,  
	12,  
	13,  
	14,  
	15,  
	16,  
	17,  
	18,  
	19,  
	20,  
	21,  
	22,  
	23,  
	82,  
	82,  
	24,  
	82,  
	82,  
	82,  
	82,  
	25,  
	26,  
	27,  
	28,  
	82,  
	29,  
	82,  
	82,  
	82,  
	82,  
	82,  
	82,  
	82,  
	30,  
	82,  
	31,  
	32,  
	82,  
	33,  
	82,  
	34,  
	35,  
	82,  
	82,  
	82,  
	82,  
	36,  
	37,  
	82,  
	38,  
	39,  
	82,  
	82,  
	40,  
	41,  
	82,  
	82,  
	42,  
	43,  
	82,  
	82,  
	44,  
	82,  
	45,  
	46,  
	82,  
	82,  
	47,  
	82,  
	82,  
	48,  
	82,  
	82,  
	49,  
	82,  
	82,  
	50,  
	82,  
	51,  
	52,  
	82,  
	53,  
	54,  
	82,  
	82,  
	55,  
	82,  
	56,  
	57,  
	58,  
	82,  
	59,  
	82,  
	82,  
	60,  
	82,  
	82,  
	61,  
	82,  
	62,  
	82,  
	63,  
	82,  
	64,  
	82,  
	65,  
	82,  
	82,  
	66,  
	82,  
	82,  
	67,  
	68,  
	82,  
	82,  
	69,  
	82,  
	70,  
	82,  
	71,  
	82,  
	72,  
	82,  
	73,  
	82,  
	82,  
	74,  
	82,  
	75,  
	76,  
	82,  
	77,  
	82,  
	82,  
	78,  
	79,  
	82,  
	82,  
	80,  
	81, 
	};
	
	
		int conga_assign_Mnk_Sph_Afl_base_index[14] = { 0,6,7,8,9,10,11,12,13,14,26,27,28,29, };
	
	
	void conga_assign_Mnk_Sph_Afl_fn(int _idx, double * a, double *r){
	
		conga_assign_Mnk_Sph_Afl_func[ conga_assign_Mnk_Sph_Afl_switch [_idx] ](a, r);
	}


	

	