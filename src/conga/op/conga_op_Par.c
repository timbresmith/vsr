
#include "conga_op_Par.h"


double * conga_op_8_1(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_8_2(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_3(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_8_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_5(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_8_7(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_8_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_8_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_12(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_8_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_8_15(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_8_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_8_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_8_20(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_21(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_22(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_23(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_24(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_25(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_8_26(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_27(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_8_29(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_30(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[11] = a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23noni
	r[12] = a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_8_31(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[1] ;
	
	
	//_e23noni
	r[12] = a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_8_32(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_33(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e13noni
	r[11] = a[6] * b[3]  + a[8] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_8_34(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_35(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[4]  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[4]  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_36(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_37(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  + a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23noni
	r[12] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_8_38(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_39(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[2] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_8_40(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_41(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_8_42(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_8_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_44(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_8_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_46(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[11] ;
	
	
	return r;
}

double * conga_op_8_47(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[14] ;
	
	
	return r;
}

double * conga_op_8_48(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_8_49(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_50(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_51(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_52(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_8_53(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_54(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[7] ;
	
	
	return r;
}

double * conga_op_8_55(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_8_56(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[7] ;
	
	
	return r;
}

double * conga_op_8_57(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_8_58(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_8_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_8_60(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_op_8_61(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_62(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13] ;
	
	
	return r;
}

double * conga_op_8_63(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_64(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_65(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_8_66(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_67(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	return r;
}

double * conga_op_8_68(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_69(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_70(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_8_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_8_72(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[12] ;
	
	
	return r;
}

double * conga_op_8_73(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_8_74(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_76(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_8_77(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_78(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_79(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_8_80(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_8_81(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_82(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_8_84(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[10] ;
	
	
	return r;
}

double * conga_op_8_85(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_86(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_88(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_8_89(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_90(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13] ;
	
	
	return r;
}

double * conga_op_8_91(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_92(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_93(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_8_94(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_8_95(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_96(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[10] ;
	
	
	return r;
}

double * conga_op_8_97(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_8_98(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_99(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_8_100(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_op_8_101(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0]  + a[9] * b[3] ;
	
	
	return r;
}

double * conga_op_8_103(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_op_8_104(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_8_105(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_8_106(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_107(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_8_108(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_op_8_109(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_110(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_111(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0] ;
	
	
	//_e23ni
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[0] ;
	
	
	//_e3noni
	r[5] = a[5] * b[0] ;
	
	
	//_e123noni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_8_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_8_114(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_8_115(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_8_117(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_8_118(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_8_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_8_121(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_8_122(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_8_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_8_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_127(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_128(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[14] ;
	
	
	return r;
}

double * conga_op_8_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_8_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_132(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13] ;
	
	
	return r;
}

double * conga_op_8_133(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_134(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_8_135(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[13] ;
	
	
	return r;
}

double * conga_op_8_136(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_137(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[4]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_8_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_139(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_8_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_141(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_8_142(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_8_143(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_8_145(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_146(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_8_147(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_148(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_8_149(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[9] * b[0] ;
	
	
	//_e13noni
	r[1] = a[9] * b[1] ;
	
	
	//_e23noni
	r[2] = a[9] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_8_150(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_8_151(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_152(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_8_153(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e12ni
	r[3] = a[0] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1] ;
	
	
	//_e23ni
	r[5] = a[2] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_8_154(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_8_155(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[0] ;
	
	
	//_e1noni
	r[3] = a[6] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e3noni
	r[5] = a[8] * b[0]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_8_156(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_157(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1 ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1 ;
	
	
	//_e23noni
	r[12] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_8_158(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[9] ;
	
	
	return r;
}

double * conga_op_8_159(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_160(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  + a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[2] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3]  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3]  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_8_161(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[3]  + a[3] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[3]  + a[3] * b[2]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[2] = a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e12ni
	r[3] = a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	//_e13ni
	r[4] = a[6] * b[2]  * -1  + a[8] * b[0] ;
	
	
	//_e23ni
	r[5] = a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	//_e1noni
	r[6] = a[6] * b[3]  * -1  + a[9] * b[0] ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1  + a[9] * b[1] ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1  + a[9] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_8_162(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e23noni
	r[12] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1] ;
	
	
	return r;
}

double * conga_op_8_163(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_8_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_8_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1  + a[9] * b[6] ;
	
	
	return r;
}

double * conga_op_8_166(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[6]  + a[3] * b[4]  * -1  + a[4] * b[3]  + a[6] * b[1]  + a[7] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[6]  + a[3] * b[5]  * -1  + a[5] * b[3]  + a[6] * b[2]  + a[8] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_8_167(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0] ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e1no
	r[3] = a[3] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0] ;
	
	
	//_e3no
	r[5] = a[5] * b[0] ;
	
	
	//_e1ni
	r[6] = a[6] * b[0] ;
	
	
	//_e2ni
	r[7] = a[7] * b[0] ;
	
	
	//_e3ni
	r[8] = a[8] * b[0] ;
	
	
	//_noni
	r[9] = a[9] * b[0] ;
	
	
	//_e12no
	r[10] = a[0] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13no
	r[11] = a[1] * b[4]  + a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23no
	r[12] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e12ni
	r[13] = a[0] * b[5]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	//_e13ni
	r[14] = a[1] * b[5]  + a[6] * b[3]  * -1  + a[8] * b[1] ;
	
	
	//_e23ni
	r[15] = a[2] * b[5]  + a[7] * b[3]  * -1  + a[8] * b[2] ;
	
	
	//_e1noni
	r[16] = a[3] * b[5]  + a[6] * b[4]  * -1  + a[9] * b[1] ;
	
	
	//_e2noni
	r[17] = a[4] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[2] ;
	
	
	//_e3noni
	r[18] = a[5] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[3] ;
	
	
	//_e123
	r[19] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12noni
	r[20] = a[0] * b[15]  + a[3] * b[13]  * -1  + a[4] * b[12]  + a[6] * b[10]  + a[7] * b[9]  * -1  + a[9] * b[6] ;
	
	
	//_e13noni
	r[21] = a[1] * b[15]  + a[3] * b[14]  * -1  + a[5] * b[12]  + a[6] * b[11]  + a[8] * b[9]  * -1  + a[9] * b[7] ;
	
	
	//_e23noni
	r[22] = a[2] * b[15]  + a[4] * b[14]  * -1  + a[5] * b[13]  + a[7] * b[11]  + a[8] * b[10]  * -1  + a[9] * b[8] ;
	
	
	//_e123no
	r[23] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6] ;
	
	
	//_e123ni
	r[24] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[6] * b[8]  + a[7] * b[7]  * -1  + a[8] * b[6] ;
	
	
	//_e123noni
	r[25] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[21]  + a[4] * b[20]  * -1  + a[5] * b[19]  + a[6] * b[18]  * -1  + a[7] * b[17]  + a[8] * b[16]  * -1  + a[9] * b[25] ;
	
	
	return r;
}


