<?php
    session_start();
    $erro="";
    if(!isset(($_POST["login"])or($_POST["login"]=="")))
        $erro = "Preencha o login!";
    elseif(
        !isset($_POST["senha"])or($_POST["senha"]==""))
            $erro = "Preencha a senha!";
    )

?>
