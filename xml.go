package main

import (
	"encoding/xml"
	"fmt"
	"net/http"
)

type customer struct {
	Name string `xml:"name"`
	City string `xml:"cityn"`
	Zip  string `xml:"zipcode"`
}

func greet(w http.ResponseWriter, r *http.Request) {
	fmt.Fprint(w, "hello world")
}

func greetall(w http.ResponseWriter, r *http.Request) {
	customers := []customer{
		{Name: "setu", City: "agra", Zip: "465644"},
		{Name: "ruchika", City: "krisnagiri", Zip: "875644"},
	}
	w.Header().Add("Content-Type", "application/xml")
	xml.NewEncoder(w).Encode(customers)
}

func main() {
	http.HandleFunc("/greet", greet)
	http.HandleFunc("/customersxml", greetall)
	http.ListenAndServe("localhost:8080", nil)
}
