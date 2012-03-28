
#include "conga_op_Pln_Pln.h"


double * conga_op_143_1(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_4(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[10] = a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_6(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_143_7(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_8(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[1] * b[9]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[2] * b[9]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[9]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_9(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_10(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_143_11(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[12] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[13] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_12(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_13(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_143_14(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_143_15(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_16(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_17(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_143_18(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_19(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_143_20(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3] ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_21(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_22(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[5] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_23(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_24(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_25(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_143_26(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_27(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_28(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_143_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[1] ;
	
	
	//_e12noni
	r[8] = a[1] * b[1] ;
	
	
	//_e13noni
	r[9] = a[2] * b[1] ;
	
	
	//_e23noni
	r[10] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_143_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e13noni
	r[11] = a[4] * b[3]  + a[6] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_143_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[7] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[2] * b[7] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[3] * b[7] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4] ;
	
	
	//_e12noni
	r[8] = a[0] * b[5]  + a[1] * b[4] ;
	
	
	//_e13noni
	r[9] = a[0] * b[6]  + a[2] * b[4] ;
	
	
	//_e23noni
	r[10] = a[0] * b[7]  + a[3] * b[4] ;
	
	
	//_e123ni
	r[11] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[4] ;
	
	
	//_e12noni
	r[8] = a[1] * b[4] ;
	
	
	//_e13noni
	r[9] = a[2] * b[4] ;
	
	
	//_e23noni
	r[10] = a[3] * b[4] ;
	
	
	//_e123ni
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_143_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[4] ;
	
	
	//_e12noni
	r[11] = a[1] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e13noni
	r[12] = a[2] * b[4]  + a[4] * b[3]  + a[6] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[3] * b[4]  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_143_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[0] * b[15]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_143_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_43(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  + a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[3]  + a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6]  + a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[10] = a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_143_45(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[11]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_143_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[14]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[15]  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_143_48(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[2] * b[6]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[3] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[10]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_50(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_52(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_143_53(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[6] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[5]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[6]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_143_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5] ;
	
	
	return r;
}

double * conga_op_143_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_143_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[5]  + a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[6]  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8] ;
	
	
	return r;
}

double * conga_op_143_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[0] * b[14]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_63(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[9] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[3] * b[7]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123
	r[12] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_143_68(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_69(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_71(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_143_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11] ;
	
	
	//_e123
	r[12] = a[0] * b[12]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_73(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_143_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_75(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[12] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[13] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_143_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_78(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123ni
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[5] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_143_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[3] * b[7]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[14] = a[0] * b[11]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_86(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_143_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_91(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[7] = a[0] * b[7] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[7] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[2] * b[7] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[3] * b[7] ;
	
	
	//_e123ni
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_143_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_95(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9] ;
	
	
	//_e123
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_143_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[8]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[9]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_98(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[6] ;
	
	
	//_e2noni
	r[10] = a[0] * b[7] ;
	
	
	//_e3noni
	r[11] = a[0] * b[8] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_143_101(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_143_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[0] * b[2]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	return r;
}

double * conga_op_143_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[8]  + a[4] * b[3]  + a[6] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[9]  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_143_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_107(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_110(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_143_112(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_113(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_143_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[2]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_143_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_116(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_143_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[1] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e13noni
	r[12] = a[2] * b[7]  + a[4] * b[3]  + a[6] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[3] * b[7]  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_143_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_143_119(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[12] = a[0] * b[12]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_120(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_122(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_123(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_124(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123noni
	r[9] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_125(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_143_126(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[10] ;
	
	
	//_e12noni
	r[11] = a[1] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[12] = a[2] * b[10]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[13] = a[3] * b[10]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[14]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_143_129(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_130(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_131(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[14] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[14]  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_143_138(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_139(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[2] * b[6]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[3] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_140(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[4]  + a[5] * b[3]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[5]  + a[6] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[5] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[6] = a[0] * b[3] ;
	
	
	//_e2noni
	r[7] = a[0] * b[4] ;
	
	
	//_e3noni
	r[8] = a[0] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_144(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_145(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_143_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_143_153(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  + a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[3]  + a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6]  + a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[9]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_143_154(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[0] * b[7]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  + a[4] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[5] * b[0]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[6] * b[0]  * -1 ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_143_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[6] * b[0] ;
	
	
	//_noni
	r[10] = a[0] * b[7] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1 ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[3]  + a[6] * b[1]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[3] * b[7]  + a[5] * b[3]  + a[6] * b[2]  * -1 ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_143_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_143_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[13] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[4] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[3]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[5] * b[3]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[6] * b[3]  * -1 ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_143_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[6] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[4] * b[6]  + a[6] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[5] * b[6]  + a[6] * b[5]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[14] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_143_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_143_164(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_165(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_143_166(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[1] * b[6]  + a[4] * b[1]  + a[5] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[2] * b[6]  + a[4] * b[2]  + a[6] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_143_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1
	r[1] = a[0] * b[1] ;
	
	
	//_e2
	r[2] = a[0] * b[2] ;
	
	
	//_e3
	r[3] = a[0] * b[3] ;
	
	
	//_no
	r[4] = a[0] * b[4] ;
	
	
	//_ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12
	r[6] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	//_e13
	r[7] = a[0] * b[7]  + a[2] * b[0] ;
	
	
	//_e23
	r[8] = a[0] * b[8]  + a[3] * b[0] ;
	
	
	//_e1no
	r[9] = a[0] * b[9] ;
	
	
	//_e2no
	r[10] = a[0] * b[10] ;
	
	
	//_e3no
	r[11] = a[0] * b[11] ;
	
	
	//_e1ni
	r[12] = a[0] * b[12]  + a[4] * b[0] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13]  + a[5] * b[0] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14]  + a[6] * b[0] ;
	
	
	//_noni
	r[15] = a[0] * b[15] ;
	
	
	//_e12no
	r[16] = a[0] * b[16]  + a[1] * b[4] ;
	
	
	//_e13no
	r[17] = a[0] * b[17]  + a[2] * b[4] ;
	
	
	//_e23no
	r[18] = a[0] * b[18]  + a[3] * b[4] ;
	
	
	//_e12ni
	r[19] = a[0] * b[19]  + a[1] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e13ni
	r[20] = a[0] * b[20]  + a[2] * b[5]  + a[4] * b[3]  * -1  + a[6] * b[1] ;
	
	
	//_e23ni
	r[21] = a[0] * b[21]  + a[3] * b[5]  + a[5] * b[3]  * -1  + a[6] * b[2] ;
	
	
	//_e1noni
	r[22] = a[0] * b[22]  + a[4] * b[4]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[23]  + a[5] * b[4]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[24]  + a[6] * b[4]  * -1 ;
	
	
	//_e123
	r[25] = a[0] * b[25]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12noni
	r[26] = a[0] * b[26]  + a[1] * b[15]  + a[4] * b[10]  + a[5] * b[9]  * -1 ;
	
	
	//_e13noni
	r[27] = a[0] * b[27]  + a[2] * b[15]  + a[4] * b[11]  + a[6] * b[9]  * -1 ;
	
	
	//_e23noni
	r[28] = a[0] * b[28]  + a[3] * b[15]  + a[5] * b[11]  + a[6] * b[10]  * -1 ;
	
	
	//_e123no
	r[29] = a[0] * b[29]  + a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9] ;
	
	
	//_e123ni
	r[30] = a[0] * b[30]  + a[1] * b[14]  + a[2] * b[13]  * -1  + a[3] * b[12]  + a[4] * b[8]  + a[5] * b[7]  * -1  + a[6] * b[6] ;
	
	
	//_e123noni
	r[31] = a[0] * b[31]  + a[1] * b[24]  + a[2] * b[23]  * -1  + a[3] * b[22]  + a[4] * b[18]  * -1  + a[5] * b[17]  + a[6] * b[16]  * -1 ;
	
	
	return r;
}


