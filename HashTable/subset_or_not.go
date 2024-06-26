package main

import "fmt"

type HashSet map[int]struct{}

func NewHashSet() *HashSet {
	set := make(HashSet)
	return &set
}

func (set *HashSet) Add(value int) {
	(*set)[value] = struct{}{}
}

func (set *HashSet) Remove(value int) {
	delete(*set, value)
}

func (set *HashSet) Contains(value int) bool {
	_, found := (*set)[value]
	return found
}

func isSubset(set *HashSet, arr []int) bool {
	for _, val := range arr {
		if !set.Contains(val) {
			return false
		}
	}
	return true
}

func main() {
	arr1 := []int{11, 1, 13, 21, 3, 7}
	arr2 := []int{11, 3, 7, 1}

	set1 := NewHashSet()

	for _, i := range arr1 {
		set1.Add(i)
	}

	res := isSubset(set1, arr2)

	if res == true {
		fmt.Println("yes it's subset")
	} else {
		fmt.Println("No it's not a subset")
	}
}
