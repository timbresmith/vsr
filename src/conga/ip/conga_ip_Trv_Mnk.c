
#include "conga_ip_Trv_Mnk.h"


double * conga_ip_86_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_4(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_86_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_6(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_86_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_86_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4]  + a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1  + a[3] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[3] * b[2] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_86_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_86_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_86_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_86_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[3] * b[2] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_86_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_86_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_86_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4] ;
	
	
	//_e12
	r[1] = a[3] * b[5] ;
	
	
	//_e13
	r[2] = a[3] * b[6] ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_86_36(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_86_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_86_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_86_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[2] * b[15]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[15]  * -1  + a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[15]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_86_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0] ;
	
	
	//_e12
	r[1] = a[3] * b[1] ;
	
	
	//_e13
	r[2] = a[3] * b[2] ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[15]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[15] ;
	
	
	//_e23no
	r[6] = a[0] * b[15]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_86_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_86_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_86_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_86_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_56(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[3] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_86_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_86_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_86_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_86_73(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[1]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e123
	r[3] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_86_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[7]  + a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[7]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[7]  + a[3] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12
	r[1] = a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[3] * b[10] ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_86_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_86_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[3] * b[7] ;
	
	
	//_e23
	r[2] = a[3] * b[8] ;
	
	
	//_e1no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_86_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[4] ;
	
	
	//_e23no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_86_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_86_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[3] ;
	
	
	//_e23no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_86_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_86_91(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[10]  + a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[10]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[2] = a[0] * b[10]  + a[3] * b[8] ;
	
	
	//_e1no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_86_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_94(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_86_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_98(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[6] ;
	
	
	//_e13
	r[1] = a[3] * b[7] ;
	
	
	//_e23
	r[2] = a[3] * b[8] ;
	
	
	//_e1no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_86_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_86_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_86_103(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[4] ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_86_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[9] ;
	
	
	//_e23no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_86_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_86_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_86_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_86_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_111(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_112(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_113(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[3] * b[1] ;
	
	
	//_e23
	r[2] = a[3] * b[2] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_86_114(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_115(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[1] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_86_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_86_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[10] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_86_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_86_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[3] * b[1] ;
	
	
	//_e23
	r[2] = a[3] * b[2] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_86_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_86_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_86_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_86_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_86_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[14] ;
	
	
	//_e23no
	r[6] = a[0] * b[14]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_86_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_86_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_86_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_86_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_86_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_148(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_150(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_86_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[7]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_86_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_86_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_86_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_156(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[3] * b[4] ;
	
	
	//_e23
	r[2] = a[3] * b[5] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_86_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[6] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_86_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_86_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_86_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[13] ;
	
	
	//_e23no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_86_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_86_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[5] = a[1] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_86_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_86_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[15] ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20]  + a[3] * b[22] ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21]  + a[3] * b[23] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1  + a[3] * b[24] ;
	
	
	//_no
	r[4] = a[0] * b[22]  * -1  + a[1] * b[23]  * -1  + a[2] * b[24]  * -1 ;
	
	
	//_e12
	r[5] = a[2] * b[30]  + a[3] * b[26] ;
	
	
	//_e13
	r[6] = a[1] * b[30]  * -1  + a[3] * b[27] ;
	
	
	//_e23
	r[7] = a[0] * b[30]  + a[3] * b[28] ;
	
	
	//_e1no
	r[8] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2no
	r[9] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3no
	r[10] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e12no
	r[11] = a[2] * b[31]  * -1 ;
	
	
	//_e13no
	r[12] = a[1] * b[31] ;
	
	
	//_e23no
	r[13] = a[0] * b[31]  * -1 ;
	
	
	//_e123
	r[14] = a[3] * b[31] ;
	
	
	return r;
}


