# shell.nix
{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  buildInputs = [
    pkgs.libpng
    pkgs.pkg-config
    pkgs.pkgsCross.arm-embedded.stdenv.cc
    pkgs.gcc
    pkgs.clang
    pkgs.gnumake
  ];
}
