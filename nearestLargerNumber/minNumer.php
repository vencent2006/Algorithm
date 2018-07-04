<?php


	$arr = [1,2,3,3,5,6,7,7,7,10];
	echo "\n>>> input array as follows:";
	print_r($arr);
	
	$target = $argv[1];
    echo "\n>>> target is $target\n";	

    $index = binarySearch($arr, $target);
	//var_dump($index);
	$value = $index < 0 ? "NOT_FOUND":$arr[$index];
	echo "\n>>> larger than target($target) is $value\n\n";

	function binarySearch($arr, $target){
		$n = count($arr);
		$l = 0;
		$r = $n - 1;
		//target在[l,r]里寻找
		while($l <= $r){
			$mid = intval($l + ($r - $l)/2);
			if ($arr[$mid] == $target){
				$k = $mid;
				while($k < $n && $arr[$k] == $target){
					$k++;
				}
				if($k >= $n){
					//没找到
					return -1;
				}
				return $k;
			}elseif($arr[$mid] < $target){
				$l = $mid + 1;
			}else{
				$r = $mid - 1;
			}
		}

		if($l < $n){
			return $l;
		}

		return -1;
	}

	



?>
