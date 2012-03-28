
#include "conga_ip_Trs_Lin.h"


double * conga_ip_67_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_4(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_6(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[0] ;
	
	
	//_e13
	r[1] = a[5] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[0] ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[2] * b[0] ;
	
	
	//_e3ni
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_67_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_67_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_67_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_67_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_67_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e1ni
	r[1] = a[0] * b[3] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_67_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_67_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_32(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_67_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[14]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[14]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[14]  * -1  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_67_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_42(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[1]  + a[6] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[2]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e12
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3] ;
	
	
	//_e1ni
	r[4] = a[0] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[1]  + a[2] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[2]  + a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[6] * b[15] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[5] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[4] * b[15] ;
	
	
	//_e1ni
	r[4] = a[0] * b[11]  + a[3] * b[15]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[12]  + a[2] * b[15] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13]  + a[1] * b[15]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_67_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[10]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[10]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[10]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_67_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[10]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_67_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_67_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_54(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1ni
	r[1] = a[0] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e1ni
	r[1] = a[0] * b[5] ;
	
	
	//_e2ni
	r[2] = a[0] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_67_59(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[3] ;
	
	
	//_e13
	r[1] = a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[3] ;
	
	
	//_e1ni
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e2ni
	r[4] = a[2] * b[3] ;
	
	
	//_e3ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e1ni
	r[1] = a[0] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_67_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[14] ;
	
	
	//_e1ni
	r[4] = a[0] * b[10]  + a[3] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  + a[2] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  + a[1] * b[14]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_67_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[9]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[9]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[9]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_67_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[10] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  + a[3] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[10]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_67_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1ni
	r[1] = a[0] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_70(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[13] ;
	
	
	//_e1ni
	r[4] = a[0] * b[9]  + a[3] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[10]  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11]  + a[1] * b[13]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_73(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[1] ;
	
	
	//_e13
	r[1] = a[5] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[1] ;
	
	
	//_e1ni
	r[3] = a[3] * b[1]  * -1 ;
	
	
	//_e2ni
	r[4] = a[2] * b[1] ;
	
	
	//_e3ni
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_67_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_ni
	r[3] = a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12ni
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e1ni
	r[1] = a[0] * b[6] ;
	
	
	//_e2ni
	r[2] = a[0] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_67_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1ni
	r[1] = a[0] * b[4] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e1ni
	r[1] = a[0] * b[3] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_67_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e1ni
	r[4] = a[3] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[4] ;
	
	
	//_e3ni
	r[6] = a[1] * b[4]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_67_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[11] ;
	
	
	//_e1ni
	r[4] = a[0] * b[7]  + a[3] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  + a[1] * b[11]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_67_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[11]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[11]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[11]  * -1  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_67_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[3] ;
	
	
	//_e1ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[3] ;
	
	
	//_e3ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[8] ;
	
	
	//_e2ni
	r[5] = a[0] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_67_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[14]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[14]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[14]  * -1  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12ni
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_67_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[14] ;
	
	
	//_e1ni
	r[4] = a[0] * b[10]  + a[3] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  + a[2] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  + a[1] * b[14]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_67_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_67_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[10] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  + a[3] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[10]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_67_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[11] ;
	
	
	//_e1ni
	r[4] = a[0] * b[7]  + a[3] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  + a[1] * b[11]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_67_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[7] ;
	
	
	//_e2ni
	r[5] = a[0] * b[8] ;
	
	
	//_e3ni
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_67_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_67_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_67_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e1ni
	r[1] = a[0] * b[7] ;
	
	
	//_e2ni
	r[2] = a[0] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_67_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_102(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[6] * b[4] ;
	
	
	//_e13
	r[1] = a[5] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[4] * b[4] ;
	
	
	//_e1ni
	r[3] = a[3] * b[4]  * -1 ;
	
	
	//_e2ni
	r[4] = a[2] * b[4] ;
	
	
	//_e3ni
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_67_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	//_e1ni
	r[1] = a[0] * b[2] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_67_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1]  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_ni
	r[3] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[9] ;
	
	
	//_e1ni
	r[4] = a[3] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_67_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_ni
	r[3] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12ni
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_108(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e1ni
	r[1] = a[0] * b[0] ;
	
	
	//_e2ni
	r[2] = a[0] * b[1] ;
	
	
	//_e3ni
	r[3] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_67_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e1ni
	r[1] = a[0] * b[1] ;
	
	
	//_e2ni
	r[2] = a[0] * b[2] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_67_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[12]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[12]  + a[4] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[12]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_ni
	r[3] = a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12ni
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_67_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[7] ;
	
	
	//_e1ni
	r[4] = a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_67_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[9] ;
	
	
	//_e2ni
	r[5] = a[0] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_67_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_67_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[6] ;
	
	
	//_e2ni
	r[5] = a[0] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_67_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_ni
	r[3] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12ni
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[3] ;
	
	
	//_e2ni
	r[5] = a[0] * b[4] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_67_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[11] ;
	
	
	//_e2ni
	r[5] = a[0] * b[12] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[10] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  + a[3] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[10]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_67_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_67_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[10] ;
	
	
	//_e2ni
	r[5] = a[0] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_67_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_ni
	r[3] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[4] * b[14] ;
	
	
	//_e1ni
	r[4] = a[0] * b[11]  + a[3] * b[14]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[12]  + a[2] * b[14] ;
	
	
	//_e3ni
	r[6] = a[0] * b[13]  + a[1] * b[14]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_67_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[9] ;
	
	
	//_e1ni
	r[4] = a[0] * b[6]  + a[3] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[7]  + a[2] * b[9] ;
	
	
	//_e3ni
	r[6] = a[0] * b[8]  + a[1] * b[9]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_67_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12ni
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_ni
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_67_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[5] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_146(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_67_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_67_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[7]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[7]  + a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_67_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1  + a[4] * b[7] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4]  + a[3] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_67_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[2]  * -1  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[3]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  * -1  + a[4] * b[11] ;
	
	
	//_e1ni
	r[4] = a[0] * b[8]  + a[3] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[9]  + a[2] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[10]  + a[1] * b[11]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_67_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_ni
	r[3] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12ni
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1]  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[2]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_ni
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12ni
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[10] ;
	
	
	//_e1ni
	r[4] = a[3] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[2] * b[10] ;
	
	
	//_e3ni
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_67_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_ni
	r[3] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[13] ;
	
	
	//_e1ni
	r[4] = a[0] * b[10]  + a[3] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  + a[1] * b[13]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[13] ;
	
	
	//_e1ni
	r[4] = a[0] * b[10]  + a[3] * b[13]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[11]  + a[2] * b[13] ;
	
	
	//_e3ni
	r[6] = a[0] * b[12]  + a[1] * b[13]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_ni
	r[3] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12ni
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_67_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[6] ;
	
	
	//_e1ni
	r[4] = a[0] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6]  * -1 ;
	
	
	//_e123ni
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_67_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_67_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[16]  + a[2] * b[17]  + a[3] * b[18]  + a[4] * b[22]  + a[5] * b[23]  + a[6] * b[24] ;
	
	
	//_e1
	r[1] = a[0] * b[9]  + a[3] * b[29]  * -1  + a[5] * b[26]  * -1  + a[6] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[10]  + a[2] * b[29]  + a[4] * b[26]  + a[6] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[11]  + a[1] * b[29]  * -1  + a[4] * b[27]  + a[5] * b[28] ;
	
	
	//_ni
	r[4] = a[0] * b[15]  * -1  + a[1] * b[26]  + a[2] * b[27]  + a[3] * b[28] ;
	
	
	//_e12
	r[5] = a[0] * b[16]  * -1  + a[6] * b[31] ;
	
	
	//_e13
	r[6] = a[0] * b[17]  * -1  + a[5] * b[31]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[18]  * -1  + a[4] * b[31] ;
	
	
	//_e1ni
	r[8] = a[0] * b[22]  + a[3] * b[31]  * -1 ;
	
	
	//_e2ni
	r[9] = a[0] * b[23]  + a[2] * b[31] ;
	
	
	//_e3ni
	r[10] = a[0] * b[24]  + a[1] * b[31]  * -1 ;
	
	
	//_e12ni
	r[11] = a[0] * b[26]  * -1 ;
	
	
	//_e13ni
	r[12] = a[0] * b[27]  * -1 ;
	
	
	//_e23ni
	r[13] = a[0] * b[28]  * -1 ;
	
	
	//_e123
	r[14] = a[0] * b[29] ;
	
	
	//_e123ni
	r[15] = a[0] * b[31] ;
	
	
	return r;
}


