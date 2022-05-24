<HTML>
<HEAD>
	<TITLE> Page vacanciers php </TITLE>
</HEAD>
<BODY>
<?php

	$dist = $_POST['distance'];	
	$heures = $_POST['heures_jour'];	
	$jours = $_POST['jours'];	
	$temps = $heures * $jours;
	$vit = $dist / $temps;
	
	printf ("La vitesse du bébé est %d", $vit);
?> 
</BODY>
</HTML>
