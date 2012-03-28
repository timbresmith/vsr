
#include "conga_op_Ori.h"


double * conga_op_2_1(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_2_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_3(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_2_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_5(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_2_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_7(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_2_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_op_2_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_2_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_op_2_12(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_13(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_14(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_2_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_20(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_21(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_2_22(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_23(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_24(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_25(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_2_26(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_28(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_29(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_30(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_2_32(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_2_33(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_2_34(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_2_35(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_36(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_37(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_38(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_2_40(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_op_2_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_42(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_44(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	//_e12noni
	r[1] = a[0] * b[5] ;
	
	
	//_e13noni
	r[2] = a[0] * b[6] ;
	
	
	//_e23noni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_2_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_46(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9] ;
	
	
	//_e23noni
	r[6] = a[0] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_2_47(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9] ;
	
	
	//_e23noni
	r[6] = a[0] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_2_48(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_2_49(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_op_2_50(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_52(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_53(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_2_54(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_2_55(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_56(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_2_57(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_58(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_2_59(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_60(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6] ;
	
	
	//_e23noni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_2_61(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_2_62(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7] ;
	
	
	//_e13noni
	r[5] = a[0] * b[8] ;
	
	
	//_e23noni
	r[6] = a[0] * b[9] ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_2_63(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_2_64(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_65(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_66(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_67(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_68(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_69(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_70(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_2_71(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_72(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[7] ;
	
	
	//_e23noni
	r[5] = a[0] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_op_2_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_2_74(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_2_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_op_2_76(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_2_77(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_78(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_2_79(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_80(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_81(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_83(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_84(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_2_85(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_88(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_2_89(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_90(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[8] ;
	
	
	//_e23noni
	r[5] = a[0] * b[9] ;
	
	
	//_e123no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_2_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_2_92(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_93(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_94(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_96(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_2_97(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_99(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_100(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_2_101(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_102(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_103(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_2_104(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_105(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[7] ;
	
	
	//_e23noni
	r[5] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_op_2_106(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_2_107(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_2_108(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_2_109(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_2_110(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_111(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_2_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_115(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_2_117(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_118(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9] ;
	
	
	//_e23noni
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_op_2_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_2_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_121(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[7] ;
	
	
	//_e23noni
	r[5] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_op_2_122(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_2_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_2_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_2_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_127(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_128(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9] ;
	
	
	//_e23noni
	r[6] = a[0] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_2_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_2_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_2_132(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7] ;
	
	
	//_e13noni
	r[5] = a[0] * b[8] ;
	
	
	//_e23noni
	r[6] = a[0] * b[9] ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_2_133(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_134(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[7] ;
	
	
	//_e23noni
	r[5] = a[0] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_135(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[8] ;
	
	
	//_e23noni
	r[5] = a[0] * b[9] ;
	
	
	//_e123no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_2_136(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_op_2_137(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4] ;
	
	
	//_e12noni
	r[4] = a[0] * b[8] ;
	
	
	//_e13noni
	r[5] = a[0] * b[9] ;
	
	
	//_e23noni
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_op_2_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_2_139(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_2_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e2noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e3noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_op_2_141(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[7] ;
	
	
	//_e23noni
	r[5] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_op_2_142(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_143(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_145(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_146(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_147(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_2_148(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_149(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_2_150(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_2_151(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_152(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_153(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[1] ;
	
	
	//_e12noni
	r[1] = a[0] * b[5] ;
	
	
	//_e13noni
	r[2] = a[0] * b[6] ;
	
	
	//_e23noni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_2_154(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_2_155(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_156(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_157(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3noni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_158(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[6] ;
	
	
	//_e13noni
	r[4] = a[0] * b[7] ;
	
	
	//_e23noni
	r[5] = a[0] * b[8] ;
	
	
	//_e123no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_159(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_op_2_160(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[7] ;
	
	
	//_e13noni
	r[5] = a[0] * b[8] ;
	
	
	//_e23noni
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_op_2_161(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e12noni
	r[3] = a[0] * b[7] ;
	
	
	//_e13noni
	r[4] = a[0] * b[8] ;
	
	
	//_e23noni
	r[5] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_op_2_162(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1] ;
	
	
	//_e13no
	r[2] = a[0] * b[2] ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	//_e1noni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_2_163(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_2_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[4] ;
	
	
	//_e23noni
	r[2] = a[0] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_2_166(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e2noni
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e3noni
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_op_2_167(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[4] = a[0] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e1noni
	r[8] = a[0] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e12noni
	r[11] = a[0] * b[19] ;
	
	
	//_e13noni
	r[12] = a[0] * b[20] ;
	
	
	//_e23noni
	r[13] = a[0] * b[21] ;
	
	
	//_e123no
	r[14] = a[0] * b[25]  * -1 ;
	
	
	//_e123noni
	r[15] = a[0] * b[30]  * -1 ;
	
	
	return r;
}


