		
	#include "conga_assign_Mnk_Cir_con.h"
	
		int conga_assign_Mnk_Cir_switch[167] = {
	 
	76,  
	76,  
	76,  
	76,  
	76,  
	0,  
	1,  
	76,  
	2,  
	76,  
	76,  
	76,  
	3,  
	76,  
	76,  
	4,  
	76,  
	5,  
	76,  
	76,  
	76,  
	6,  
	7,  
	76,  
	76,  
	8,  
	76,  
	9,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	10,  
	11,  
	76,  
	12,  
	13,  
	14,  
	15,  
	76,  
	76,  
	76,  
	76,  
	16,  
	76,  
	17,  
	18,  
	19,  
	20,  
	21,  
	22,  
	23,  
	76,  
	24,  
	76,  
	76,  
	25,  
	76,  
	26,  
	76,  
	76,  
	27,  
	28,  
	29,  
	30,  
	76,  
	76,  
	31,  
	76,  
	76,  
	32,  
	33,  
	76,  
	76,  
	34,  
	35,  
	76,  
	76,  
	36,  
	37,  
	76,  
	38,  
	76,  
	76,  
	39,  
	40,  
	76,  
	41,  
	42,  
	76,  
	43,  
	44,  
	76,  
	45,  
	76,  
	76,  
	46,  
	76,  
	76,  
	47,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	48,  
	76,  
	49,  
	50,  
	76,  
	51,  
	52,  
	76,  
	53,  
	76,  
	54,  
	76,  
	55,  
	76,  
	56,  
	76,  
	57,  
	58,  
	76,  
	59,  
	60,  
	76,  
	76,  
	61,  
	62,  
	76,  
	63,  
	76,  
	64,  
	76,  
	65,  
	76,  
	66,  
	76,  
	67,  
	68,  
	76,  
	69,  
	76,  
	76,  
	70,  
	76,  
	71,  
	72,  
	76,  
	76,  
	73,  
	74,  
	76,  
	75, 
	};
	
	
		int conga_assign_Mnk_Cir_base_index[10] = { 1,2,3,16,17,18,19,20,21,31, };
	
	
	void conga_assign_Mnk_Cir_fn(int _idx, double * a, double *r){
	
		conga_assign_Mnk_Cir_func[ conga_assign_Mnk_Cir_switch [_idx] ](a, r);
	}


	

	