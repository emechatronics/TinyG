/*
 *gcode_mudflap.h - data file containing gcode
 */
// mudflap test
const char PROGMEM mudflap[] = "\
(SuperCam Ver 2.2a SPINDLE)\n\
N1 G20	( set inches mode - ash )\n\
N5 G40 G17\n\
N10 T1 M06\n\
(N15 G90 G0 X0 Y0 Z0)\n\
N20 S5000 M03 \n\
G92 X0 Y0 Z0 (zero table - ash)\n\
N25 G00 F8.0 (was F30.0)\n\
N30 X0.076 Y0.341\n\
N45 G01 F10.0 (was F60.0)\n\
N50 X0.064 Y0.326\n\
N55 X0.060 Y0.293\n\
N60 X0.077 Y0.267\n\
N65 X0.111 Y0.257\n\
N70 X0.149 Y0.252\n\
N75 X0.188 Y0.255\n\
N80 X0.227 Y0.268\n\
N85 X0.257 Y0.271\n\
N90 X0.335 Y0.265\n\
N95 X0.412 Y0.271\n\
N100 X0.474 Y0.287\n\
N105 X0.491 Y0.289\n\
N110 X0.517 Y0.273\n\
N115 X0.544 Y0.263\n\
N120 X0.580 Y0.261\n\
N125 X0.595 Y0.263\n\
N130 X0.621 Y0.274\n\
N135 X0.659 Y0.306\n\
N140 X0.673 Y0.335\n\
N145 X0.679 Y0.361\n\
N150 X0.678 Y0.389\n\
N155 X0.670 Y0.420\n\
N160 X0.670 Y0.446\n\
N165 X0.680 Y0.474\n\
N170 X0.704 Y0.497\n\
N175 X0.732 Y0.515\n\
N180 X0.794 Y0.535\n\
N185 X0.872 Y0.567\n\
N190 X0.950 Y0.604\n\
N195 X1.031 Y0.647\n\
N200 X1.149 Y0.722\n\
N205 X1.308 Y0.854\n\
N210 X1.430 Y0.984\n\
N215 X1.447 Y0.986\n\
N220 X1.628 Y0.822\n\
N225 X1.732 Y0.714\n\
N230 X2.009 Y0.381\n\
N235 X2.116 Y0.266\n\
N240 X2.228 Y0.157\n\
N245 X2.280 Y0.123\n\
N250 X2.332 Y0.094\n\
N255 X2.423 Y0.070\n\
N260 X2.489 Y0.065\n\
N265 X2.557 Y0.066\n\
N270 X2.627 Y0.084\n\
N275 X2.693 Y0.109\n\
N280 X2.730 Y0.133\n\
N285 X2.805 Y0.190\n\
N290 X2.829 Y0.216\n\
N295 X2.880 Y0.291\n\
N300 X2.884 Y0.300\n\
N305 X2.898 Y0.332\n\
N310 X2.905 Y0.367\n\
N315 X2.910 Y0.407\n\
N320 X2.908 Y0.446\n\
N325 X2.901 Y0.495\n\
N330 X2.897 Y0.495\n\
N335 X2.890 Y0.524\n\
N340 X2.842 Y0.604\n\
N345 X2.814 Y0.665\n\
N350 X2.794 Y0.750\n\
N355 X2.791 Y0.838\n\
N360 X2.819 Y0.976\n\
N365 X2.837 Y1.044\n\
N370 X2.862 Y1.112\n\
N375 X2.877 Y1.145\n\
N380 X2.912 Y1.217\n\
N385 X2.917 Y1.226\n\
N390 X2.951 Y1.281\n\
N395 X2.970 Y1.295\n\
N400 X2.996 Y1.295\n\
N405 X3.013 Y1.275\n\
N410 X3.024 Y1.254\n\
N415 X3.070 Y1.151\n\
N420 X3.077 Y1.134\n\
N425 X3.125 Y1.039\n\
N430 X3.138 Y1.019\n\
N435 X3.205 Y0.908\n\
N440 X3.282 Y0.797\n\
N445 X3.361 Y0.691\n\
N450 X3.426 Y0.592\n\
N455 X3.456 Y0.543\n\
N460 X3.479 Y0.493\n\
N465 X3.494 Y0.472\n\
N470 X3.505 Y0.446\n\
N475 X3.518 Y0.417\n\
N480 X3.530 Y0.391\n\
N485 X3.564 Y0.300\n\
N490 X3.577 Y0.253\n\
N495 X3.568 Y0.212\n\
N500 X3.544 Y0.176\n\
N505 X3.541 Y0.146\n\
N510 X3.553 Y0.119\n\
N515 X3.576 Y0.106\n\
N520 X3.597 Y0.102\n\
N525 X3.618 Y0.109\n\
N530 X3.639 Y0.129\n\
N535 X3.650 Y0.159\n\
N540 X3.663 Y0.178\n\
N545 X3.678 Y0.192\n\
N550 X3.699 Y0.197\n\
N555 X3.723 Y0.196\n\
N560 X3.764 Y0.179\n\
N565 X3.805 Y0.165\n\
N570 X3.884 Y0.159\n\
N575 X3.949 Y0.165\n\
N580 X3.966 Y0.175\n\
N585 X3.978 Y0.194\n\
N590 X3.978 Y0.223\n\
N595 X3.960 Y0.245\n\
N600 X3.834 Y0.311\n\
N605 X3.762 Y0.345\n\
N610 X3.726 Y0.389\n\
N615 X3.703 Y0.458\n\
N620 X3.682 Y0.530\n\
N625 X3.679 Y0.534\n\
N630 X3.626 Y0.681\n\
N635 X3.568 Y0.828\n\
N640 X3.444 Y1.080\n\
N645 X3.405 Y1.167\n\
N650 X3.404 Y1.167\n\
N655 X3.387 Y1.208\n\
N660 X3.384 Y1.208\n\
N665 X3.365 Y1.265\n\
N670 X3.355 Y1.285\n\
N675 X3.348 Y1.308\n\
N680 X3.333 Y1.350\n\
N685 X3.321 Y1.391\n\
N690 X3.311 Y1.428\n\
N695 X3.339 Y1.423\n\
N700 X3.440 Y1.406\n\
N705 X3.510 Y1.408\n\
N710 X3.585 Y1.421\n\
N715 X3.611 Y1.439\n\
N720 X3.611 Y1.441\n\
N725 X3.615 Y1.441\n\
N730 X3.636 Y1.488\n\
N735 X3.634 Y1.517\n\
N740 X3.622 Y1.543\n\
N745 X3.605 Y1.563\n\
N750 X3.576 Y1.575\n\
N755 X3.544 Y1.581\n\
N760 X3.479 Y1.592\n\
N765 X3.451 Y1.598\n\
N770 X3.387 Y1.626\n\
N775 X3.390 Y1.636\n\
N780 X3.532 Y1.602\n\
N785 X3.601 Y1.597\n\
N790 X3.668 Y1.598\n\
N795 X3.782 Y1.612\n\
N800 X3.794 Y1.618\n\
N805 X3.868 Y1.636\n\
N810 X3.918 Y1.655\n\
N815 X3.945 Y1.667\n\
N820 X3.964 Y1.685\n\
N825 X3.967 Y1.685\n\
N830 X3.974 Y1.699\n\
N835 X3.984 Y1.725\n\
N840 X3.984 Y1.758\n\
N845 X3.970 Y1.790\n\
N850 X3.945 Y1.817\n\
N855 X3.918 Y1.826\n\
N860 X3.891 Y1.827\n\
N865 X3.842 Y1.809\n\
N870 X3.798 Y1.784\n\
N875 X3.746 Y1.772\n\
N880 X3.698 Y1.764\n\
N885 X3.635 Y1.766\n\
N890 X3.553 Y1.785\n\
N895 X3.478 Y1.820\n\
N900 X3.409 Y1.864\n\
N905 X3.345 Y1.918\n\
N910 X3.264 Y2.023\n\
N915 X3.248 Y2.051\n\
N920 X3.240 Y2.081\n\
N925 X3.316 Y2.086\n\
N930 X3.390 Y2.104\n\
N935 X3.414 Y2.121\n\
N940 X3.431 Y2.153\n\
N945 X3.433 Y2.180\n\
N950 X3.427 Y2.205\n\
N955 X3.413 Y2.224\n\
N960 X3.392 Y2.242\n\
N965 X3.335 Y2.244\n\
N970 X3.278 Y2.236\n\
N975 X3.256 Y2.242\n\
N980 X3.239 Y2.251\n\
N985 X3.211 Y2.280\n\
N990 X3.174 Y2.356\n\
N995 X3.159 Y2.397\n\
N1000 X3.150 Y2.438\n\
N1005 X3.140 Y2.481\n\
N1010 X3.132 Y2.510\n\
N1015 X3.118 Y2.543\n\
N1020 X3.099 Y2.576\n\
N1025 X3.051 Y2.631\n\
N1030 X3.003 Y2.666\n\
N1035 X2.957 Y2.685\n\
N1040 X2.907 Y2.699\n\
N1045 X2.860 Y2.711\n\
N1050 X2.819 Y2.727\n\
N1055 X2.768 Y2.745\n\
N1060 X2.716 Y2.757\n\
N1065 X2.675 Y2.757\n\
N1070 X2.579 Y2.731\n\
N1075 X2.570 Y2.723\n\
N1080 X2.559 Y2.720\n\
N1085 X2.530 Y2.701\n\
N1090 X2.501 Y2.693\n\
N1095 X2.471 Y2.683\n\
N1100 X2.443 Y2.668\n\
N1105 X2.396 Y2.634\n\
N1110 X2.354 Y2.591\n\
N1115 X2.352 Y2.591\n\
N1120 X2.325 Y2.543\n\
N1125 X2.315 Y2.521\n\
N1130 X2.307 Y2.498\n\
N1135 X2.296 Y2.464\n\
N1140 X2.293 Y2.427\n\
N1145 X2.295 Y2.366\n\
N1150 X2.321 Y2.303\n\
N1155 X2.358 Y2.247\n\
N1160 X2.419 Y2.203\n\
N1165 X2.419 Y2.179\n\
N1170 X2.405 Y2.158\n\
N1175 X2.362 Y2.123\n\
N1180 X2.354 Y2.104\n\
N1185 X2.354 Y2.091\n\
N1190 X2.380 Y2.065\n\
N1195 X2.410 Y2.051\n\
N1200 X2.410 Y2.047\n\
N1205 X2.405 Y2.028\n\
N1210 X2.408 Y2.010\n\
N1215 X2.416 Y1.995\n\
N1220 X2.433 Y1.982\n\
N1225 X2.438 Y1.963\n\
N1230 X2.447 Y1.948\n\
N1235 X2.461 Y1.938\n\
N1240 X2.480 Y1.931\n\
N1245 X2.478 Y1.899\n\
N1250 X2.487 Y1.875\n\
N1255 X2.504 Y1.854\n\
N1260 X2.527 Y1.848\n\
N1265 X2.549 Y1.849\n\
N1270 X2.577 Y1.861\n\
N1275 X2.604 Y1.866\n\
N1280 X2.631 Y1.854\n\
N1285 X2.640 Y1.827\n\
N1290 X2.640 Y1.792\n\
N1295 X2.629 Y1.759\n\
N1300 X2.612 Y1.727\n\
N1305 X2.576 Y1.694\n\
N1310 X2.536 Y1.662\n\
N1315 X2.470 Y1.616\n\
N1320 X2.345 Y1.551\n\
N1325 X2.307 Y1.521\n\
N1330 X2.260 Y1.482\n\
N1335 X2.243 Y1.477\n\
N1340 X2.228 Y1.469\n\
N1345 X2.222 Y1.448\n\
N1350 X2.228 Y1.425\n\
N1355 X2.254 Y1.405\n\
N1360 X2.268 Y1.373\n\
N1365 X2.279 Y1.342\n\
N1370 X2.308 Y1.287\n\
N1375 X2.340 Y1.254\n\
N1380 X2.407 Y1.201\n\
N1385 X2.441 Y1.156\n\
N1390 X2.454 Y1.131\n\
N1395 X2.460 Y1.106\n\
N1400 X2.464 Y1.102\n\
N1405 X2.471 Y1.036\n\
N1410 X2.466 Y0.971\n\
N1415 X2.451 Y0.897\n\
N1420 X2.415 Y0.791\n\
N1425 X2.403 Y0.767\n\
N1430 X2.388 Y0.765\n\
N1435 X2.306 Y0.841\n\
N1440 X2.222 Y0.911\n\
N1445 X2.114 Y0.995\n\
N1450 X2.002 Y1.076\n\
N1455 X1.905 Y1.139\n\
N1460 X1.754 Y1.223\n\
N1465 X1.637 Y1.278\n\
N1470 X1.582 Y1.301\n\
N1475 X1.558 Y1.315\n\
N1480 X1.460 Y1.352\n\
N1485 X1.399 Y1.360\n\
N1490 X1.338 Y1.354\n\
N1495 X1.287 Y1.329\n\
N1500 X1.248 Y1.294\n\
N1505 X1.217 Y1.254\n\
N1510 X1.214 Y1.252\n\
N1515 X1.172 Y1.195\n\
N1520 X1.128 Y1.139\n\
N1525 X1.110 Y1.117\n\
N1530 X0.958 Y0.941\n\
N1535 X0.891 Y0.873\n\
N1540 X0.825 Y0.808\n\
N1545 X0.755 Y0.747\n\
N1550 X0.619 Y0.633\n\
N1555 X0.477 Y0.526\n\
N1560 X0.477 Y0.524\n\
N1565 X0.411 Y0.476\n\
N1570 X0.331 Y0.454\n\
N1575 X0.278 Y0.427\n\
N1580 X0.231 Y0.397\n\
N1585 X0.183 Y0.379\n\
N1590 X0.135 Y0.365\n\
N1595 X0.076 Y0.341\n\
N1605 G00 F30.0\n\
N1610 M05 \n\
N1615 G90 X0 Y0 Z0 M30\n\
(End of CNC Program)";

