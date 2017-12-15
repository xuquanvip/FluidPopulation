#!/bin/bash

find . -type f -name "*.png" -exec convert {} -strip {} \;
