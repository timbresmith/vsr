
#include "conga_ip_Pln_Biv.h"


double * conga_ip_145_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_4(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_145_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[0] ;
	
	
	//_e3
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0] ;
	
	
	//_e123
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_145_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_145_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_145_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[3] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_145_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_145_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_145_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_145_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[0] ;
	
	
	//_e13
	r[2] = a[3] * b[1] ;
	
	
	//_e23
	r[3] = a[3] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_145_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_145_32(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[5] ;
	
	
	//_e13
	r[2] = a[3] * b[6] ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_36(double * a, double * b, double *r) { 
	
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

double * conga_ip_145_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_145_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_145_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[1] ;
	
	
	//_e13
	r[2] = a[3] * b[2] ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1  + a[2] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e123
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  + a[6] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[12]  + a[5] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[13]  + a[4] * b[15]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12ni
	r[4] = a[2] * b[15] ;
	
	
	//_e13ni
	r[5] = a[1] * b[15]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[15] ;
	
	
	//_e123
	r[7] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_145_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_145_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_51(double * a, double * b, double *r) { 
	
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

double * conga_ip_145_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_145_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_54(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[7] ;
	
	
	//_ni
	r[3] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_145_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e123
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_145_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12]  + a[4] * b[14]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_145_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_145_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_70(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[10]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[11]  + a[4] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_145_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[1] ;
	
	
	//_e3
	r[2] = a[4] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[1] ;
	
	
	//_e13ni
	r[4] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[1] ;
	
	
	//_e123
	r[6] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_145_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[3] * b[10] ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1ni
	r[4] = a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_145_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_145_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e123
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_145_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[8]  + a[5] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_145_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	//_e123
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_145_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[12] ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[4] = a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12]  + a[4] * b[14]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_145_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_145_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_95(double * a, double * b, double *r) { 
	
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

double * conga_ip_145_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[8]  + a[5] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_145_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_145_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_145_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_145_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[4] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[4] ;
	
	
	//_e13ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[4] ;
	
	
	//_e123
	r[6] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_145_103(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[4] ;
	
	
	//_ni
	r[3] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_145_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[9] ;
	
	
	//_e13ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[9] ;
	
	
	//_e123
	r[6] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_145_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[3] * b[7] ;
	
	
	//_e23
	r[3] = a[3] * b[8] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  * -1  + a[2] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_108(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_111(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_112(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_145_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[0] ;
	
	
	//_e13
	r[2] = a[3] * b[1] ;
	
	
	//_e23
	r[3] = a[3] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_114(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_145_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_145_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_145_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[12]  + a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1  + a[3] * b[10] ;
	
	
	//_e23
	r[3] = a[0] * b[12]  + a[3] * b[11] ;
	
	
	//_e1ni
	r[4] = a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[9]  * -1  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[7] ;
	
	
	//_e13ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[7] ;
	
	
	//_e123
	r[6] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_145_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[9] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[11] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_145_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_145_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[8] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_145_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[3] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_145_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_145_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_145_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[10] ;
	
	
	//_e13ni
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_145_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_145_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_145_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[12]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[13]  + a[4] * b[14]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12ni
	r[4] = a[2] * b[14] ;
	
	
	//_e13ni
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[14] ;
	
	
	//_e123
	r[7] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_145_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[6]  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[7]  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[9] ;
	
	
	//_e13ni
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9] ;
	
	
	//_e123
	r[7] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_145_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[8] ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_145_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_146(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_145_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_145_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_145_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[2]  + a[2] * b[3]  + a[3] * b[8]  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  * -1  + a[2] * b[4]  + a[3] * b[9]  + a[5] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[3] * b[10]  + a[4] * b[11]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e12ni
	r[4] = a[2] * b[11] ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11] ;
	
	
	//_e123
	r[7] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_145_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7]  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[8] ;
	
	
	//_e13
	r[2] = a[3] * b[9] ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[10] ;
	
	
	//_e13ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[10] ;
	
	
	//_e123
	r[6] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_145_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12]  + a[4] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_145_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6]  + a[3] * b[11]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[3] * b[12]  + a[4] * b[13]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12ni
	r[4] = a[2] * b[13] ;
	
	
	//_e13ni
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_145_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[11] ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1ni
	r[4] = a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  * -1  + a[2] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[3] * b[4] ;
	
	
	//_e13
	r[2] = a[3] * b[5] ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_145_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_145_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[15]  + a[4] * b[26]  * -1  + a[5] * b[27]  * -1  + a[6] * b[28]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[16]  + a[2] * b[17]  + a[3] * b[22]  + a[6] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[16]  * -1  + a[2] * b[18]  + a[3] * b[23]  + a[5] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[17]  * -1  + a[1] * b[18]  * -1  + a[3] * b[24]  + a[4] * b[31]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24] ;
	
	
	//_e12
	r[5] = a[2] * b[29]  + a[3] * b[26] ;
	
	
	//_e13
	r[6] = a[1] * b[29]  * -1  + a[3] * b[27] ;
	
	
	//_e23
	r[7] = a[0] * b[29]  + a[3] * b[28] ;
	
	
	//_e1ni
	r[8] = a[1] * b[26]  + a[2] * b[27] ;
	
	
	//_e2ni
	r[9] = a[0] * b[26]  * -1  + a[2] * b[28] ;
	
	
	//_e3ni
	r[10] = a[0] * b[27]  * -1  + a[1] * b[28]  * -1 ;
	
	
	//_e12ni
	r[11] = a[2] * b[31] ;
	
	
	//_e13ni
	r[12] = a[1] * b[31]  * -1 ;
	
	
	//_e23ni
	r[13] = a[0] * b[31] ;
	
	
	//_e123
	r[14] = a[3] * b[31] ;
	
	
	return r;
}

