		
	#include "conga_assign_Pln_Pln_con.h"
	
		int conga_assign_Pln_Pln_switch[167] = {
	 
	0,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	1,  
	68,  
	68,  
	2,  
	3,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	4,  
	5,  
	68,  
	68,  
	6,  
	68,  
	68,  
	7,  
	68,  
	8,  
	9,  
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
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	20,  
	21,  
	22,  
	68,  
	68,  
	23,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	24,  
	68,  
	25,  
	26,  
	68,  
	27,  
	68,  
	28,  
	29,  
	68,  
	68,  
	68,  
	68,  
	30,  
	31,  
	68,  
	32,  
	33,  
	68,  
	68,  
	34,  
	35,  
	68,  
	68,  
	36,  
	68,  
	68,  
	68,  
	37,  
	68,  
	38,  
	39,  
	68,  
	68,  
	40,  
	68,  
	68,  
	41,  
	68,  
	68,  
	42,  
	68,  
	68,  
	43,  
	68,  
	44,  
	45,  
	68,  
	46,  
	47,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	48,  
	68,  
	49,  
	68,  
	68,  
	50,  
	68,  
	68,  
	68,  
	68,  
	51,  
	68,  
	52,  
	68,  
	53,  
	68,  
	54,  
	68,  
	68,  
	55,  
	68,  
	68,  
	56,  
	57,  
	68,  
	68,  
	58,  
	68,  
	59,  
	68,  
	60,  
	68,  
	61,  
	68,  
	68,  
	68,  
	68,  
	62,  
	68,  
	68,  
	63,  
	68,  
	64,  
	68,  
	68,  
	65,  
	68,  
	68,  
	68,  
	66,  
	67, 
	};
	
	
		int conga_assign_Pln_Pln_base_index[7] = { 0,6,7,8,12,13,14, };
	
	
	void conga_assign_Pln_Pln_fn(int _idx, double * a, double *r){
	
		conga_assign_Pln_Pln_func[ conga_assign_Pln_Pln_switch [_idx] ](a, r);
	}


	

	