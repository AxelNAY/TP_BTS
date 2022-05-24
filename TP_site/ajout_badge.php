<html>
<head>
	<title> Ajout dans badge Php </title>
</head>

<body bgcolor="FFCC66">
<?php
	$Identifiant = $_POST['Identifiant'];
	$Code = $_POST['Code'];
	$Nom = $_POST['Nom'];
	$Prenom = $_POST['Prenom'];
	$ZoneAcces = $_POST['ZoneAcces'];
	$DateCrea = $_POST['DateCrea'];
	
	
	$requete = "INSERT INTO BADGE VALUES ('".$Identifiant."','".$Code."','".$Nom."','".$Prenom."','".$ZoneAcces."','".$DateCrea."');"  ;
	echo $requete ;
	$id = mysqli_connect("localhost","root","","bts") ;
	if ($id)
	{
		echo "ok" ;
		mysqli_query($id,$requete) ;
		mysqli_close($id) ;
	}
	else
	{
		echo "bug" ;
	}
?>


	
	
</body>
</html>