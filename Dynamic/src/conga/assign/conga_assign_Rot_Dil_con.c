		
	#include "conga_assign_Rot_Dil_con.h"
	
		int conga_assign_Rot_Dil_switch[167] = {
	 
	0,  
	75,  
	75,  
	1,  
	75,  
	75,  
	75,  
	2,  
	75,  
	3,  
	4,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	5,  
	6,  
	7,  
	75,  
	75,  
	8,  
	75,  
	75,  
	9,  
	75,  
	10,  
	11,  
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
	75,  
	75,  
	22,  
	75,  
	75,  
	75,  
	75,  
	23,  
	24,  
	75,  
	75,  
	75,  
	25,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	26,  
	75,  
	27,  
	28,  
	75,  
	29,  
	75,  
	30,  
	31,  
	75,  
	75,  
	75,  
	75,  
	32,  
	33,  
	75,  
	34,  
	35,  
	75,  
	75,  
	36,  
	37,  
	75,  
	75,  
	38,  
	39,  
	75,  
	75,  
	40,  
	75,  
	41,  
	42,  
	75,  
	75,  
	43,  
	75,  
	75,  
	44,  
	75,  
	75,  
	45,  
	75,  
	75,  
	46,  
	75,  
	47,  
	48,  
	75,  
	49,  
	50,  
	75,  
	75,  
	51,  
	75,  
	52,  
	75,  
	53,  
	75,  
	54,  
	75,  
	75,  
	75,  
	75,  
	75,  
	55,  
	75,  
	56,  
	75,  
	57,  
	75,  
	58,  
	75,  
	59,  
	75,  
	75,  
	60,  
	75,  
	75,  
	61,  
	62,  
	75,  
	75,  
	63,  
	75,  
	64,  
	75,  
	65,  
	75,  
	66,  
	75,  
	67,  
	75,  
	75,  
	75,  
	75,  
	68,  
	69,  
	75,  
	70,  
	75,  
	75,  
	71,  
	72,  
	75,  
	75,  
	73,  
	74, 
	};
	
	
		int conga_assign_Rot_Dil_base_index[8] = { 0,6,7,8,15,26,27,28, };
	
	
	void conga_assign_Rot_Dil_fn(int _idx, double * a, double *r){
	
		conga_assign_Rot_Dil_func[ conga_assign_Rot_Dil_switch [_idx] ](a, r);
	}


	

	