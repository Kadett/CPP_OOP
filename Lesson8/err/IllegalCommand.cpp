#include "IllegalCommand.h"

IllegalCommand::IllegalCommand(std::string err) {
    std::stringstream ss;
    ss << "Exception: IllegalCommand;\n";
    ss << "Illegal command: " << err <<";\n";
    error = ss.str();
}

const char *IllegalCommand::what() const noexcept {

    return error.c_str();
}
