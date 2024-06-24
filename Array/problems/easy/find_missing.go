package main

import "fmt"

func findMissing(arr []int) int {
	sum := 0
	largest := arr[0]

	for _, val := range arr {
		if largest < val {
			largest = val
		}
		sum += val
	}

	return (largest * (largest + 1) / 2) - sum
}

func main() {
	fmt.Println("[Find Missing Number]\nTime Comp: O(N)")
	arr := []int{1, 3, 7, 5, 6, 2}
	missing := findMissing(arr)
	fmt.Println("The missing number is", missing)
}
