# makefile_autocomplete.sh

_makefile_autocomplete() {
    local cur prev opts
    COMPREPLY=()
    cur="${COMP_WORDS[COMP_CWORD]}"
    prev="${COMP_WORDS[COMP_CWORD-1]}"

    # Only autocomplete for 'make' command
    if [[ ${COMP_WORDS[0]} == "make" ]]; then
        # Get all .c files in the current directory
        opts=$(ls *.c 2>/dev/null)
        COMPREPLY=( $(compgen -W "${opts}" -- ${cur}) )
    fi

    return 0
}

# Register the autocomplete function for the 'make' command
complete -F _makefile_autocomplete make

