SETLOCAL
set path=C:\Program Files\Cullimore and Ring\Shared64;%PATH%
set path=C:\Program Files\Cullimore and Ring\Thermal Desktop;%PATH%
chdir "C:\Users\taiji\APSS-Thermal\Kessler\Thermal Submodels\TXRX\APSS-2-Thermal-TXRX\"
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "TXRX_Internal_Lower-RcOptics.rck" 1 Y 0
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "TXRX_Internal_Upper-RcOptics.rck" 1 Y 0
