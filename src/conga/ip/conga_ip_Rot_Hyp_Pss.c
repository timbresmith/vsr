
#include "conga_ip_Rot_Hyp_Pss.h"


double * conga_ip_154_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_6(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[6] * b[0] ;
	
	
	//_ni
	r[1] = a[7] * b[0]  * -1 ;
	
	
	//_e12no
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e13no
	r[3] = a[1] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[0] ;
	
	
	//_e13ni
	r[6] = a[4] * b[0]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_154_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_154_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_154_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[4]  + a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  + a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[8] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_154_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_154_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_14(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_154_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_154_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_17(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[0] ;
	
	
	//_e13
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_154_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_154_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[8] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_154_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_154_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_154_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_154_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[7] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_35(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[3] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2ni
	r[4] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3ni
	r[5] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_154_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[4] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[5] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[6] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[15]  * -1  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[15]  + a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[15]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[15]  + a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_43(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e1ni
	r[3] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3] ;
	
	
	//_ni
	r[1] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12no
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[3] = a[1] * b[3] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[3] ;
	
	
	//_e13ni
	r[6] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[6] * b[15] ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[7] * b[15]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[15]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[15] ;
	
	
	//_e23no
	r[7] = a[0] * b[15]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[15] ;
	
	
	//_e13ni
	r[9] = a[4] * b[15]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_154_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[11]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[7] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[8] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_154_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[7] ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_154_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_154_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_57(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_58(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_154_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[3] ;
	
	
	//_ni
	r[4] = a[7] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[3] ;
	
	
	//_e13ni
	r[9] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_154_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_154_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[10]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_154_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[7] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_154_73(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[6] * b[1] ;
	
	
	//_ni
	r[1] = a[7] * b[1]  * -1 ;
	
	
	//_e12no
	r[2] = a[2] * b[1]  * -1 ;
	
	
	//_e13no
	r[3] = a[1] * b[1] ;
	
	
	//_e23no
	r[4] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[1] ;
	
	
	//_e13ni
	r[6] = a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_154_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[7]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e1ni
	r[4] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[5] = a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[6] = a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_154_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_79(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_80(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_154_81(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[3] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[4] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[5] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[4] ;
	
	
	//_ni
	r[4] = a[7] * b[4]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[4] ;
	
	
	//_e13ni
	r[9] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_154_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[11] ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_154_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[7] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_154_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[3] ;
	
	
	//_ni
	r[4] = a[7] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[3] ;
	
	
	//_e13ni
	r[9] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_154_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_154_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_154_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[6] * b[11] ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_154_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_154_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_154_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_154_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[4] ;
	
	
	//_ni
	r[4] = a[7] * b[4]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[4] ;
	
	
	//_e13ni
	r[9] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_154_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_154_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1no
	r[1] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[4] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[5] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[9] ;
	
	
	//_ni
	r[4] = a[7] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[9] ;
	
	
	//_e13ni
	r[9] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_154_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[4]  + a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[5] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_154_113(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[3] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[4] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[5] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[5] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  * -1  + a[7] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[1]  + a[5] * b[0] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_154_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_154_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[13]  * -1  + a[7] * b[12]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[5] * b[12] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e1ni
	r[7] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[8] = a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[7] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[7] ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_154_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_154_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_154_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_154_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[8] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_154_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_154_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[14]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_154_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_154_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_154_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[14]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[7] * b[14]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_154_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[6] * b[9] ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[7] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[9] ;
	
	
	//_e13ni
	r[9] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_154_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[4] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[5] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_142(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[7] ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[7]  * -1 ;
	
	
	//_e12no
	r[2] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[3] = a[1] * b[7] ;
	
	
	//_e23no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[7] ;
	
	
	//_e13ni
	r[6] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_154_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[6] ;
	
	
	//_e13ni
	r[9] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[5] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_154_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[7] ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_154_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[6] * b[11] ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[7] * b[11]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_154_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[7]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[7] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_154_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_154_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_154_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[5] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[6] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[6] ;
	
	
	//_e13ni
	r[9] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_154_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_154_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_154_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[30]  * -1  + a[7] * b[29]  * -1 ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20]  + a[4] * b[16]  + a[5] * b[17] ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21]  + a[3] * b[16]  * -1  + a[5] * b[18] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1  + a[3] * b[17]  * -1  + a[4] * b[18]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[22]  * -1  + a[1] * b[23]  * -1  + a[2] * b[24]  * -1  + a[6] * b[31] ;
	
	
	//_ni
	r[5] = a[3] * b[22]  + a[4] * b[23]  + a[5] * b[24]  + a[7] * b[31]  * -1 ;
	
	
	//_e12
	r[6] = a[2] * b[30]  + a[5] * b[29] ;
	
	
	//_e13
	r[7] = a[1] * b[30]  * -1  + a[4] * b[29]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[30]  + a[3] * b[29] ;
	
	
	//_e1no
	r[9] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e1ni
	r[12] = a[4] * b[26]  + a[5] * b[27] ;
	
	
	//_e2ni
	r[13] = a[3] * b[26]  * -1  + a[5] * b[28] ;
	
	
	//_e3ni
	r[14] = a[3] * b[27]  * -1  + a[4] * b[28]  * -1 ;
	
	
	//_e12no
	r[15] = a[2] * b[31]  * -1 ;
	
	
	//_e13no
	r[16] = a[1] * b[31] ;
	
	
	//_e23no
	r[17] = a[0] * b[31]  * -1 ;
	
	
	//_e12ni
	r[18] = a[5] * b[31] ;
	
	
	//_e13ni
	r[19] = a[4] * b[31]  * -1 ;
	
	
	//_e23ni
	r[20] = a[3] * b[31] ;
	
	
	return r;
}


