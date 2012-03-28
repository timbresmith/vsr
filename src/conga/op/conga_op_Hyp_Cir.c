
#include "conga_op_Hyp_Cir.h"


double * conga_op_119_1(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_2(double * a, double * b, double *r) { 
	
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
	r[6] = a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_3(double * a, double * b, double *r) { 
	
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
	r[6] = a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_119_4(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_119_5(double * a, double * b, double *r) { 
	
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
	r[9] = a[12] * b[1]  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_7(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_8(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_9(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_11(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_12(double * a, double * b, double *r) { 
	
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

double * conga_op_119_13(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_119_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_15(double * a, double * b, double *r) { 
	
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

double * conga_op_119_16(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_18(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_119_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_20(double * a, double * b, double *r) { 
	
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

double * conga_op_119_21(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_22(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_23(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_24(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[1] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_26(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_27(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_28(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_29(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_30(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[2]  * -1  + a[4] * b[1]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[3]  * -1  + a[5] * b[1]  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_31(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[1]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[1]  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[1]  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_32(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_33(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[6] * b[3]  + a[8] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[7] * b[3]  + a[8] * b[2]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_34(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_35(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[4]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[4]  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[4]  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_36(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_37(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[4]  + a[3] * b[3]  * -1  + a[5] * b[1]  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_38(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_39(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_40(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_41(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_42(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_119_43(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_119_44(double * a, double * b, double *r) { 
	
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
	r[9] = a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[12] * b[1]  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_45(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_119_46(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_47(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_48(double * a, double * b, double *r) { 
	
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

double * conga_op_119_49(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_50(double * a, double * b, double *r) { 
	
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

double * conga_op_119_51(double * a, double * b, double *r) { 
	
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

double * conga_op_119_52(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_119_53(double * a, double * b, double *r) { 
	
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

double * conga_op_119_54(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_55(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_56(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_57(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_58(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_59(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_119_60(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_61(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_62(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_63(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_64(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[7]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_65(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_66(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[1] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_67(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_119_68(double * a, double * b, double *r) { 
	
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

double * conga_op_119_69(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_70(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_71(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_119_72(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_74(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[1] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_75(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_76(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_77(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[1] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_78(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_79(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_80(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_81(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[1] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_82(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_83(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_84(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_85(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[7]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_86(double * a, double * b, double *r) { 
	
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

double * conga_op_119_87(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_88(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_89(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_90(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_91(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_92(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_93(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_94(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_95(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_96(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_97(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_98(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_99(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_100(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_101(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[5]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[2] = a[4] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e123no
	r[3] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_102(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_119_103(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[12] * b[1]  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_104(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_105(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_106(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[1] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_107(double * a, double * b, double *r) { 
	
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

double * conga_op_119_108(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_109(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[1] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_110(double * a, double * b, double *r) { 
	
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

double * conga_op_119_111(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[12] * b[0] ;
	
	
	return r;
}

double * conga_op_119_112(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_119_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_114(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_115(double * a, double * b, double *r) { 
	
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

double * conga_op_119_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_117(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_118(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_119(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_120(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_121(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_122(double * a, double * b, double *r) { 
	
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

double * conga_op_119_123(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_124(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_119_126(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_127(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[10]  + a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[10]  + a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_128(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_129(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_130(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_131(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_132(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_133(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_134(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_135(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_136(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_137(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[4] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[5] * b[4]  + a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[4]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_138(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_139(double * a, double * b, double *r) { 
	
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

double * conga_op_119_140(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[9]  + a[3] * b[7]  * -1  + a[4] * b[6]  + a[6] * b[4]  + a[7] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[1] * b[9]  + a[3] * b[8]  * -1  + a[5] * b[6]  + a[6] * b[5]  + a[8] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[7] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_141(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_142(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_143(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[4]  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[6]  * -1  + a[5] * b[4]  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_144(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	return r;
}

double * conga_op_119_145(double * a, double * b, double *r) { 
	
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

double * conga_op_119_146(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_147(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_148(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_149(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[2]  + a[4] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e123ni
	r[1] = a[6] * b[2]  + a[7] * b[1]  * -1  + a[8] * b[0] ;
	
	
	return r;
}

double * conga_op_119_150(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_151(double * a, double * b, double *r) { 
	
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

double * conga_op_119_152(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_153(double * a, double * b, double *r) { 
	
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
	r[9] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[12] * b[1]  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_154(double * a, double * b, double *r) { 
	
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

double * conga_op_119_155(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[6] * b[3]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[13] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_156(double * a, double * b, double *r) { 
	
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

double * conga_op_119_157(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[0] * b[7]  + a[3] * b[5]  * -1  + a[4] * b[4]  + a[6] * b[2]  + a[7] * b[1]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[1] * b[7]  + a[3] * b[6]  * -1  + a[5] * b[4]  + a[6] * b[3]  + a[8] * b[1]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_158(double * a, double * b, double *r) { 
	
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
	
	
	//_e123
	r[6] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[7] = a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[6] * b[5]  * -1  + a[7] * b[4]  + a[8] * b[3]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_119_159(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_160(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[4] * b[3] ;
	
	
	//_e3noni
	r[8] = a[5] * b[3] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[12] * b[3] ;
	
	
	return r;
}

double * conga_op_119_161(double * a, double * b, double *r) { 
	
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
	r[6] = a[6] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e3noni
	r[8] = a[8] * b[3]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1  + a[7] * b[5]  + a[8] * b[4]  * -1  + a[9] * b[2]  + a[10] * b[1]  * -1  + a[11] * b[0]  + a[13] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_119_162(double * a, double * b, double *r) { 
	
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
	
	
	//_e12noni
	r[9] = a[3] * b[8]  * -1  + a[4] * b[7]  + a[6] * b[5]  + a[7] * b[4]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[10] = a[3] * b[9]  * -1  + a[5] * b[7]  + a[6] * b[6]  + a[8] * b[4]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[11] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[7] * b[6]  + a[8] * b[5]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[12] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[6] * b[3]  + a[7] * b[2]  * -1  + a[8] * b[1]  + a[13] * b[0] ;
	
	
	return r;
}

double * conga_op_119_163(double * a, double * b, double *r) { 
	
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

double * conga_op_119_164(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_165(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[5]  + a[4] * b[4]  * -1  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_119_166(double * a, double * b, double *r) { 
	
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

double * conga_op_119_167(double * a, double * b, double *r) { 
	
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
	
	
	//_e12no
	r[9] = a[0] * b[4]  + a[3] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13no
	r[10] = a[1] * b[4]  + a[3] * b[3]  * -1  + a[5] * b[1] ;
	
	
	//_e23no
	r[11] = a[2] * b[4]  + a[4] * b[3]  * -1  + a[5] * b[2] ;
	
	
	//_e12ni
	r[12] = a[0] * b[5]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	//_e13ni
	r[13] = a[1] * b[5]  + a[6] * b[3]  * -1  + a[8] * b[1] ;
	
	
	//_e23ni
	r[14] = a[2] * b[5]  + a[7] * b[3]  * -1  + a[8] * b[2] ;
	
	
	//_e1noni
	r[15] = a[3] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	//_e2noni
	r[16] = a[4] * b[5]  + a[7] * b[4]  * -1 ;
	
	
	//_e3noni
	r[17] = a[5] * b[5]  + a[8] * b[4]  * -1 ;
	
	
	//_e123
	r[18] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e12noni
	r[19] = a[0] * b[15]  + a[3] * b[13]  * -1  + a[4] * b[12]  + a[6] * b[10]  + a[7] * b[9]  * -1  + a[9] * b[0] ;
	
	
	//_e13noni
	r[20] = a[1] * b[15]  + a[3] * b[14]  * -1  + a[5] * b[12]  + a[6] * b[11]  + a[8] * b[9]  * -1  + a[10] * b[0] ;
	
	
	//_e23noni
	r[21] = a[2] * b[15]  + a[4] * b[14]  * -1  + a[5] * b[13]  + a[7] * b[11]  + a[8] * b[10]  * -1  + a[11] * b[0] ;
	
	
	//_e123no
	r[22] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[8]  + a[4] * b[7]  * -1  + a[5] * b[6]  + a[12] * b[0] ;
	
	
	//_e123ni
	r[23] = a[0] * b[14]  + a[1] * b[13]  * -1  + a[2] * b[12]  + a[6] * b[8]  + a[7] * b[7]  * -1  + a[8] * b[6]  + a[13] * b[0] ;
	
	
	//_e123noni
	r[24] = a[0] * b[24]  + a[1] * b[23]  * -1  + a[2] * b[22]  + a[3] * b[21]  + a[4] * b[20]  * -1  + a[5] * b[19]  + a[6] * b[18]  * -1  + a[7] * b[17]  + a[8] * b[16]  * -1  + a[9] * b[3]  + a[10] * b[2]  * -1  + a[11] * b[1]  + a[12] * b[5]  + a[13] * b[4]  * -1 ;
	
	
	return r;
}


