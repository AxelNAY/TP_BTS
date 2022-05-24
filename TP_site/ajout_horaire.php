<html>
<head>
	<title> Ajout dans horaire Php </title>
</head>

<body bgcolor="FFCC66">
<?php
	$Num = $_POST['Num'];
	$Personne = $_POST['Personne'];
	$Jour = $_POST['Jour'];
	$Heure = $_POST['Heure'];
	
	$requete = "INSERT INTO ZONE VALUES ('".$Num."','".$Personne."','".$Jour."','".$Heure."');"  ;
//	echo $requete ;
	$id = mysqli_connect("localhost","root","","bts") ;
	if ($id)
	{
//		echo "ok" ;
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
	