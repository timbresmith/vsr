		
	#include "conga_assign_Trs_Pln_con.h"
	
		int conga_assign_Trs_Pln_switch[167] = {
	 
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	0,  
	68,  
	1,  
	2,  
	3,  
	68,  
	4,  
	68,  
	68,  
	68,  
	68,  
	5,  
	6,  
	7,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	8,  
	68,  
	9,  
	68,  
	10,  
	11,  
	68,  
	12,  
	13,  
	68,  
	14,  
	68,  
	68,  
	15,  
	68,  
	68,  
	68,  
	68,  
	16,  
	17,  
	18,  
	68,  
	68,  
	19,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	68,  
	20,  
	68,  
	21,  
	22,  
	68,  
	23,  
	68,  
	24,  
	25,  
	68,  
	68,  
	68,  
	68,  
	26,  
	27,  
	68,  
	28,  
	29,  
	68,  
	68,  
	30,  
	31,  
	68,  
	68,  
	32,  
	68,  
	68,  
	68,  
	33,  
	68,  
	34,  
	35,  
	68,  
	68,  
	68,  
	68,  
	68,  
	36,  
	68,  
	68,  
	37,  
	68,  
	68,  
	38,  
	68,  
	39,  
	40,  
	68,  
	41,  
	42,  
	68,  
	68,  
	43,  
	68,  
	44,  
	45,  
	46,  
	68,  
	47,  
	68,  
	68,  
	48,  
	68,  
	68,  
	49,  
	68,  
	50,  
	68,  
	51,  
	68,  
	52,  
	68,  
	53,  
	68,  
	68,  
	54,  
	68,  
	68,  
	55,  
	56,  
	68,  
	68,  
	57,  
	68,  
	58,  
	68,  
	68,  
	68,  
	68,  
	68,  
	59,  
	68,  
	68,  
	60,  
	68,  
	61,  
	62,  
	68,  
	63,  
	68,  
	68,  
	64,  
	65,  
	68,  
	68,  
	66,  
	67, 
	};
	
	
		int conga_assign_Trs_Pln_base_index[7] = { 12,13,14,26,27,28,30, };
	
	
	void conga_assign_Trs_Pln_fn(int _idx, double * a, double *r){
	
		conga_assign_Trs_Pln_func[ conga_assign_Trs_Pln_switch [_idx] ](a, r);
	}


	

	