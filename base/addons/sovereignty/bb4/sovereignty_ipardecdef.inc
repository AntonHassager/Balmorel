*Energy sovereignty addon - FF 2025
*Sets associated with the SOVEREIGNTY addon

SET C_SOV(C)  					"Group of countries that collectively achieve energy sovereignty"; 
C_SOV(C)=NO;					
C_SOV('DENMARK')=YES;			

SET IR_SOV(RRR)     			"Internal regions that belong to group of sovereign countries";
SET IR_NON_SOV(RRR) 			"Internal regions that don't belong to group of sovereign countries";

*Initialize all internal regions as non-sovereign
IR_SOV(IR) = NO;
IR_NON_SOV(IR) = YES;

*Assign sovereignty to regions based on country sovereignty
IR_SOV(RRR) = YES$(SUM(C, CCCRRR(C, RRR) * C_SOV(C)));

*Exclude sovereign regions from non-sovereign set
IR_NON_SOV(RRR)$(IR_SOV(RRR)) = NO;

ALIAS (RRR,IRRRE1,IRRRI1);
ALIAS (IR_SOV,IR_SOV1);
ALIAS (IR_NON_SOV,IR_NON_SOV1);


POSITIVE VARIABLE VX_SOV(Y);
POSITIVE VARIABLE VX_NON_SOV(Y);