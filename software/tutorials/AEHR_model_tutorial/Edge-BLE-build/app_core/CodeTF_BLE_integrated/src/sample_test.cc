

const float sample_data[400] = {-1.04691969,-0.94846849,-0.78984398,-0.69336705,-0.64262755,-0.50070642
,-0.14154479,0.4110199,0.95732974,1.23913916,1.11024263,0.62887148
,0.01045522,-0.50818309,-0.78821298,-0.82471132,-0.70681982,-0.54890409
,-0.42837179,-0.34545464,-0.2209481,0.05045093,0.5049396,1.0370595
,1.42400804,1.45452755,1.07520549,0.43752714,-0.19552763,-0.60944331
,-0.74341583,-0.67870654,-0.5472451,-0.4425767,-0.38206316,-0.31552936
,-0.15981123,0.14695728,0.58107406,1.0004723,1.19442397,1.0116531
,0.48000966,-0.18810868,-0.72505488,-0.97427501,-0.96239443,-0.83268111
,-0.71524275,-0.64509568,-0.57067068,-0.41077603,-0.10459947,0.35499762
,0.89054201,1.32960712,1.46303507,1.17492593,0.5548645,-0.12457582
,-0.5800201,-0.70676836,-0.61938905,-0.51161047,-0.47744302,-0.46521937
,-0.38758741,-0.24451527,-0.11536328,-0.03847868,0.06437623,0.30835643
,0.68388417,0.99775553,1.00731654,0.63332781,0.04441657,-0.47152556
,-0.72526713,-0.7334145,-0.64026246,-0.56209218,-0.51041153,-0.43632964
,-0.30737054,-0.12350095,0.1178317,0.42811455,0.77519382,1.03980382
,1.06421589,0.77685853,0.27622949,-0.22096003,-0.53191393,-0.62408213
,-0.59735271,-0.56699336,-0.56829597,-0.56003397,-0.49216798,-0.35037487
,-0.14217514,0.13008521,0.45514837,0.77049297,0.95808456,0.9126014
,0.63166697,0.23869872,-0.09445299,-0.26261248,-0.28278851,-0.25136691
,-0.25245337,-0.29805887,-0.33636476,-0.30144811,-0.15800159,0.07981337
,0.34914858,0.55330674,0.59662333,0.43647196,0.12211136,-0.21886924
,-0.45184206,-0.5173369,-0.45963672,-0.37786448,-0.34043574,-0.33326726
,-0.28056955,-0.11568753,0.15695899,0.45326783,0.65412433,0.66901964
,0.48106303,0.15428802,-0.19568206,-0.4535951,-0.55670147,-0.52040912
,-0.41902474,-0.32853556,-0.2682035,-0.18614467,-0.00606192,0.29615944
,0.64689292,0.90257481,0.9366367,0.72232432,0.34932694,-0.03591054
,-0.31760355,-0.46145894,-0.50210747,-0.49341352,-0.46848467,-0.43200432
,-0.37110549,-0.26228885,-0.07452584,0.2121238,0.56820411,0.88922161
,1.02612617,0.87388874,0.45753399,-0.06282583,-0.48801261,-0.70748617
,-0.75447684,-0.74479528,-0.759707,-0.78149195,-0.73396068,-0.5744392
,-0.33574461,-0.07641281,0.19739454,0.53799869,0.96707305,1.38226711
,1.57682293,1.3864615,0.84149572,0.1751982,-0.3370268,-0.57251858
,-0.61816898,-0.64692013,-0.74257106,-0.84200942,-0.83431245,-0.69297883
,-0.49286897,-0.30143002,-0.08186079,0.26262911,0.73617828,1.16061416
,1.27452773,0.95234947,0.33504773,-0.26453875,-0.60093218,-0.65851902
,-0.59872888,-0.57009745,-0.58201489,-0.55016564,-0.42712984,-0.25293839
,-0.07622643,0.13684905,0.46991149,0.91695038,1.29935887,1.36426651
,0.99658076,0.34074977,-0.29588062,-0.67255412,-0.76563846,-0.71872712
,-0.67300427,-0.65639165,-0.61488385,-0.50705204,-0.33759728,-0.11109932
,0.2008146,0.6071209,1.01295785,1.22419697,1.07860035,0.59388287
,-0.01714574,-0.49232302,-0.69791952,-0.68437362,-0.59297208,-0.52423984
,-0.48713787,-0.43991838,-0.34383893,-0.17259152,0.09678099,0.45862688
,0.82906094,1.04594546,0.96127448,0.56435442,0.01767638,-0.44414759
,-0.67194898,-0.68111118,-0.59565285,-0.52681506,-0.4996067,-0.47052659
,-0.38609592,-0.21561676,0.04922388,0.3888737,0.73067728,0.94531216
,0.90748233,0.59400221,0.130637,-0.2732945,-0.46215337,-0.43014295
,-0.29767489,-0.19717732,-0.17195702,-0.16543082,-0.08908268,0.10175442
,0.37870322,0.65751669,0.83275537,0.81434587,0.56755096,0.1466371
,-0.30915454,-0.63815948,-0.74888008,-0.6736798,-0.53402676,-0.43970014
,-0.40369172,-0.3429826,-0.16178998,0.15450558,0.5104875,0.75503733
,0.77313865,0.55032619,0.17495063,-0.21209863,-0.4854404,-0.58707777
,-0.54175434,-0.43094303,-0.33754903,-0.29077257,-0.24718976,-0.12686425
,0.11435982,0.42766868,0.67816498,0.72207445,0.50589902,0.11569005
,-0.26512258,-0.46584761,-0.43152995,-0.24634839,-0.06190956,0.01567048
,-0.00335243,-0.01384812,0.08977393,0.3193703,0.57022477,0.68649861
,0.56734704,0.23818659,-0.16184981,-0.46583515,-0.57821633,-0.5202266
,-0.39349942,-0.2915453,-0.22598,-0.12448321,0.09534411,0.43211577
,0.76443134,0.91148813,0.75481212,0.33132418,-0.17776954,-0.56021607
,-0.70504217,-0.65432752,-0.53927732,-0.45868772,-0.40172287,-0.27539516
,-0.00771189,0.36339704,0.6895333,0.80050688,0.61546495,0.19814386
,-0.27763366,-0.62544563,-0.74425245,-0.65916111,-0.48350676,-0.32834093
,-0.22048222,-0.08967598,0.15966722,0.54290243,0.94288785,1.16524573
,1.06921816,0.67331947,0.1489446,-0.29375787,-0.53469787,-0.58873298
,-0.54812747,-0.49078734,-0.43514024,-0.35975281,-0.24166494,-0.06799855
,0.17233167,0.47777871,0.79612942,1.00640237,0.97096236,0.63939555
,0.11469216,-0.39428078,-0.71003393,-0.79929933,-0.76400033,-0.72653151
,-0.72293897,-0.69948628,-0.59601522,-0.4140999};