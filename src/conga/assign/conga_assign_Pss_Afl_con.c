		
	#include "conga_assign_Pss_Afl_con.h"
	
		int conga_assign_Pss_Afl_switch[167] = {
	 
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	0,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	1,  
	64,  
	2,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	3,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	64,  
	4,  
	64,  
	64,  
	5,  
	6,  
	7,  
	8,  
	64,  
	64,  
	64,  
	64,  
	9,  
	64,  
	64,  
	64,  
	10,  
	11,  
	12,  
	64,  
	13,  
	64,  
	14,  
	64,  
	64,  
	15,  
	64,  
	16,  
	64,  
	64,  
	64,  
	64,  
	17,  
	64,  
	64,  
	64,  
	18,  
	64,  
	64,  
	19,  
	20,  
	64,  
	64,  
	21,  
	22,  
	64,  
	64,  
	23,  
	24,  
	64,  
	25,  
	64,  
	64,  
	26,  
	27,  
	64,  
	28,  
	29,  
	64,  
	30,  
	31,  
	64,  
	64,  
	32,  
	64,  
	33,  
	64,  
	64,  
	64,  
	64,  
	64,  
	34,  
	35,  
	64,  
	36,  
	64,  
	64,  
	64,  
	37,  
	64,  
	38,  
	39,  
	64,  
	40,  
	41,  
	64,  
	42,  
	64,  
	43,  
	64,  
	44,  
	64,  
	45,  
	64,  
	46,  
	47,  
	64,  
	48,  
	49,  
	64,  
	64,  
	50,  
	51,  
	64,  
	52,  
	64,  
	64,  
	64,  
	53,  
	64,  
	54,  
	64,  
	55,  
	56,  
	64,  
	57,  
	64,  
	64,  
	58,  
	64,  
	59,  
	60,  
	64,  
	64,  
	61,  
	62,  
	64,  
	63, 
	};
	
	
		int conga_assign_Pss_Afl_base_index[6] = { 16,17,18,22,23,24, };
	
	
	void conga_assign_Pss_Afl_fn(int _idx, double * a, double *r){
	
		conga_assign_Pss_Afl_func[ conga_assign_Pss_Afl_switch [_idx] ](a, r);
	}


	

	