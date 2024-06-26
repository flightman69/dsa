package main

import "fmt"

func rearrange(arr []int) {
	size := len(arr)
	var arr2 [100]int

	for i, val := range arr {
		if val >= 0 && val < size {
			arr2[val] = val
		}
		if arr2[i] != i {
			arr2[i] = -1
		}
	}

	for i := 0; i < size; i++ {
		fmt.Printf("%v ", arr2[i])
	}
	fmt.Println()
}

func main() {
	fmt.Println("[Rearrange array arr[i] = i]\nTime Comp: O(N)")

	arr := []int{
		-1, 55, 0, 43, -1, 86, 53, 18, 20, -1, 58, 52, 90, 28, -1, 10, 45, 1, 89, 25, 77, -1, -1,
		15, 5, -1, 36, 17, 11, 12, -1, 95, -1, 91, 33, 6, 50, 54, 22, 68, -1, 98, 38, 34, -1, -1,
		-1, 87, 24, 14, 7, 37, 49, -1, 4, 76, 62, -1, 23, 59, 66, 13, 19, 75, 88, -1, -1, 96, 97,
		-1, 35, 65, 74, 31, 72, 46, -1, 61, 26, 40, 41, 29, -1, -1, 2, 81, -1, 82, -1, 69, -1, 67,
		80, -1, 47, 84, 8, 83, 42,
	}
	rearrange(arr)
}
