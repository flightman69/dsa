package main

import (
	"fmt"
	"sort"
)

func kthSmallest(arr []int, k int) int {
	sort.Ints(arr)

	return arr[k-1]
}

func main() {
	arr := []int{7, 10, 4, 20, 15}
	k := 4

	res := kthSmallest(arr, k)
	fmt.Printf("The %vth smallest is %v\n", k, res)
}
