#!/bin/bash
while getopts c:e: flag
do
  case $flag in

    c) tar -cf ${@:2}
        ;;

    e) tar -xf $2
        ;;
  esac
done