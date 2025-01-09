*Energy sovereignty addon - FF 2025

****** ELECTRICITY ******

EQUATION QX_SOVBALANCE  "Net electricity export balance from sovereign to non-sovereign countries is neutral or positive";

*** Export between sovereign and non-sovereign regions

$ifi %SOV_TIME_RES%==Y_Sov QX_SOVBALANCE(IY411).. 
$ifi %SOV_TIME_RES%==Y_Sov  SUM((IRE,IRI,IS3,T)$(IR_SOV(IRE) AND IR_NON_SOV(IRI) AND IXK_HASORPOT(IY411,IRE,IRI)),VX_T(IY411,IRE,IRI,IS3,T)) 
$ifi %SOV_TIME_RES%==Y_Sov -SUM((IRI,IRE,IS3,T)$(IR_NON_SOV(IRI) AND IR_SOV(IRE) AND IXK_HASORPOT(IY411,IRI,IRE)),VX_T(IY411,IRI,IRE,IS3,T)) 

$ifi %SOV_TIME_RES%==S_Sov QX_SOVBALANCE(IY411, IS3).. 
$ifi %SOV_TIME_RES%==S_Sov  SUM((IRE,IRI,T)$(IR_SOV(IRE) AND IR_NON_SOV(IRI) AND IXK_HASORPOT(IY411,IRE,IRI)),VX_T(IY411,IRE,IRI,IS3,T)) 
$ifi %SOV_TIME_RES%==S_Sov -SUM((IRI,IRE,T)$(IR_NON_SOV(IRI) AND IR_SOV(IRE) AND IXK_HASORPOT(IY411,IRI,IRE)),VX_T(IY411,IRI,IRE,IS3,T)) 

$ifi %SOV_TIME_RES%==T_Sov QX_SOVBALANCE(IY411, IS3, T).. 
$ifi %SOV_TIME_RES%==T_Sov  SUM((IRE,IRI)$(IR_SOV(IRE) AND IR_NON_SOV(IRI) AND IXK_HASORPOT(IY411,IRE,IRI)),VX_T(IY411,IRE,IRI,IS3,T)) 
$ifi %SOV_TIME_RES%==T_Sov -SUM((IRI,IRE)$(IR_NON_SOV(IRI) AND IR_SOV(IRE) AND IXK_HASORPOT(IY411,IRI,IRE)),VX_T(IY411,IRI,IRE,IS3,T)) 
           
*** Balance condition

*Sovereign regions are net exporters
$ifi     %SOV_NET_EXP%==yes  =G= EPS

*Sovereign regions are net neutral
$ifi not %SOV_NET_EXP%==yes  =E= EPS
;


****** HYDROGEN ******
$ifi not %SOV_H2%==yes $goto NO_HYDROGEN_TRANSMISSION

EQUATION QXH2_SOVBALANCE  "Net hydrogen export balance from sovereign to non-sovereign countries is neutral or positive";

*** Export between sovereign and non-sovereign regions

$ifi %SOV_TIME_RES%==Y_Sov QXH2_SOVBALANCE(IY411).. 
$ifi %SOV_TIME_RES%==Y_Sov  SUM((IRE,IRI,IS3,T)$(IR_SOV(IRE) AND IR_NON_SOV(IRI) AND IXH2K_HASORPOT(IY411,IRE,IRI)),VXH2_T(IY411,IRE,IRI,IS3,T)) 
$ifi %SOV_TIME_RES%==Y_Sov -SUM((IRI,IRE,IS3,T)$(IR_NON_SOV(IRI) AND IR_SOV(IRE) AND IXH2K_HASORPOT(IY411,IRI,IRE)),VXH2_T(IY411,IRI,IRE,IS3,T)) 

$ifi %SOV_TIME_RES%==S_Sov QXH2_SOVBALANCE(IY411, IS3).. 
$ifi %SOV_TIME_RES%==S_Sov  SUM((IRE,IRI,T)$(IR_SOV(IRE) AND IR_NON_SOV(IRI) AND IXH2K_HASORPOT(IY411,IRE,IRI)),VXH2_T(IY411,IRE,IRI,IS3,T)) 
$ifi %SOV_TIME_RES%==S_Sov -SUM((IRI,IRE,T)$(IR_NON_SOV(IRI) AND IR_SOV(IRE) AND IXH2K_HASORPOT(IY411,IRI,IRE)),VXH2_T(IY411,IRI,IRE,IS3,T)) 

$ifi %SOV_TIME_RES%==T_Sov QXH2_SOVBALANCE(IY411, IS3, T).. 
$ifi %SOV_TIME_RES%==T_Sov  SUM((IRE,IRI)$(IR_SOV(IRE) AND IR_NON_SOV(IRI) AND IXH2K_HASORPOT(IY411,IRE,IRI)),VXH2_T(IY411,IRE,IRI,IS3,T)) 
$ifi %SOV_TIME_RES%==T_Sov -SUM((IRI,IRE)$(IR_NON_SOV(IRI) AND IR_SOV(IRE) AND IXH2K_HASORPOT(IY411,IRI,IRE)),VXH2_T(IY411,IRI,IRE,IS3,T)) 
           
*** Balance condition

*Sovereign regions are net exporters
$ifi     %SOV_NET_EXP%==yes  =G= EPS

*Sovereign regions are net neutral
$ifi not %SOV_NET_EXP%==yes  =E= EPS
;

$label NO_HYDROGEN_TRANSMISSION
