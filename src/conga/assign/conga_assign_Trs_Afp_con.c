		
	#include "conga_assign_Trs_Afp_con.h"
	
		int conga_assign_Trs_Afp_switch[167] = {
	 
	81,  
	81,  
	81,  
	81,  
	81,  
	0,  
	1,  
	81,  
	2,  
	81,  
	81,  
	81,  
	3,  
	81,  
	81,  
	4,  
	81,  
	5,  
	81,  
	81,  
	81,  
	6,  
	7,  
	81,  
	8,  
	9,  
	81,  
	10,  
	81,  
	81,  
	81,  
	81,  
	81,  
	81,  
	81,  
	81,  
	81,  
	81,  
	81,  
	81,  
	11,  
	12,  
	81,  
	13,  
	14,  
	15,  
	16,  
	81,  
	81,  
	81,  
	81,  
	17,  
	81,  
	18,  
	19,  
	20,  
	21,  
	22,  
	23,  
	24,  
	81,  
	25,  
	81,  
	81,  
	26,  
	81,  
	27,  
	81,  
	81,  
	28,  
	29,  
	30,  
	31,  
	81,  
	81,  
	32,  
	81,  
	81,  
	33,  
	34,  
	81,  
	81,  
	35,  
	36,  
	81,  
	81,  
	37,  
	38,  
	81,  
	39,  
	81,  
	81,  
	40,  
	41,  
	81,  
	42,  
	43,  
	81,  
	44,  
	45,  
	81,  
	46,  
	47,  
	81,  
	48,  
	81,  
	81,  
	49,  
	81,  
	81,  
	50,  
	51,  
	81,  
	52,  
	81,  
	81,  
	81,  
	53,  
	81,  
	54,  
	55,  
	81,  
	56,  
	57,  
	81,  
	58,  
	81,  
	59,  
	81,  
	60,  
	81,  
	61,  
	81,  
	62,  
	63,  
	81,  
	64,  
	65,  
	81,  
	81,  
	66,  
	67,  
	81,  
	68,  
	81,  
	69,  
	81,  
	70,  
	81,  
	71,  
	81,  
	72,  
	73,  
	81,  
	74,  
	81,  
	81,  
	75,  
	81,  
	76,  
	77,  
	81,  
	81,  
	78,  
	79,  
	81,  
	80, 
	};
	
	
		int conga_assign_Trs_Afp_base_index[14] = { 1,2,3,16,17,18,19,20,21,22,23,24,25,31, };
	
	
	void conga_assign_Trs_Afp_fn(int _idx, double * a, double *r){
	
		conga_assign_Trs_Afp_func[ conga_assign_Trs_Afp_switch [_idx] ](a, r);
	}


	

	