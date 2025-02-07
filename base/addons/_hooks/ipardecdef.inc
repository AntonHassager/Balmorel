* Location of internal parameter delarations used in add-ons
$ifi %BB4%==yes $goto beginbb4

$ifi %HYDROGEN%==yes   $include   "../../base/addons/hydrogen/hydrogen_ipardecdef.inc";

$ifi not %BB4%==yes $goto endoffile

$label  beginbb4
$ifi %import_results%==yes  $include   "../../base/addons/import_results/import_results_ipardecdef.inc";

$ifi %HYDROGEN%==yes   $include   "../../base/addons/hydrogen/bb4/hydrogen_ipardecdef.inc";
$ifi %OPTIFLOW%==yes   $include   "../../base/addons/optiflow/bb4/optiflow_ipardecdef.inc";
$ifi %UnitComm%==yes  $include   "../../base/addons/unitcommitment/bb4/uc_ipardecdef.inc";
$ifi %STEPWISE_RAMPING%==yes  $include   "../../base/addons/STEPWISE_RAMPING/stepwise_ramping_ipardecdef.inc";
$ifi %X3V%==yes $include "../../base/addons/x3v/bb4/x3v_ipardecdef.inc";
$ifi %GRIDTARIFFS%==yes  $include   "../../base/addons/GridTariffs/bb4/GridTariffs_ipardecdef.inc";
$ifi %TAXES%==yes  $include   "../../base/addons/taxes/tax_ipardecdef.inc";
$ifi %EV%==yes      $include        "../../base/addons/EV/bb4/EV_ipardecdef.inc";
$ifi %DEMANDRESPONSE%==yes      $include        "../../base/addons/demandresponse/bb4/dr_ipardecdef.inc";
$ifi %FlowBased%==yes      $include        "../../base/addons/FlowBased/bb4/flowbased_ipardecdef.inc";
$ifi %HEATTRANS%==yes       $include   "../../base/addons/heattrans/bb4/heattrans_ipardecdef.inc";
$ifi %DECOM%==yes  $include   "../../base/addons/DECOM/DECOM_ipardecdef.inc";
$ifi %BalancingMarket%==yes       $include   "../../base/addons/balancing_market/balancing_market_ipardecdef.inc";
$ifi %SOVEREIGNTY%==yes  $include   "../../base/addons/sovereignty/bb4/sovereignty_ipardecdef.inc";

$label endoffile


