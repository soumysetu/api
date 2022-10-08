package main

import (
	"encoding/json"
	"encoding/xml"
	"fmt"
	"log"
	"net/http"

	"github.com/gorilla/mux"
)

type customer struct {
	Name string `xml:"name" json : "name1"`
	City string `xml:"cityn" json : "city1"`
	Zip  string `xml:"zipcode" json : "zipcode1"`
}

func greet(w http.ResponseWriter, r *http.Request) {
	fmt.Fprint(w, "hello world")
}

func getcustomer(w http.ResponseWriter, r *http.Request) {
	vars := mux.Vars(r)
	fmt.Fprint(w, vars["customer_id"])
}

func createCustomer(w http.ResponseWriter, r *http.Request) {
	fmt.Fprint(w, "post request receive")
}

func greetall(w http.ResponseWriter, r *http.Request) {
	customers := []customer{
		{Name: "setu", City: "agra", Zip: "465644"},
		{Name: "ruchika", City: "krisnagiri", Zip: "875644"},
	}
	if r.Header.Get("Content-Type") == "application/xml" {
		w.Header().Add("Content-Type", "application/xml")
		xml.NewEncoder(w).Encode(customers)
	} else {
		w.Header().Add("Content-Type", "application/json")
		json.NewEncoder(w).Encode(customers)
	}
}

func main() {
	router := mux.NewRouter()
	router.HandleFunc("/greet", greet).Methods(http.MethodGet)
	router.HandleFunc("/customers", greetall).Methods(http.MethodGet)
	router.HandleFunc("/customers/{customer_id}", getcustomer).Methods(http.MethodGet)
	router.HandleFunc("/customers", createCustomer).Methods(http.MethodPost)
	log.Fatal(http.ListenAndServe("localhost:8080", router))
}
