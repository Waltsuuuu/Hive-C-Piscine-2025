
#!/bin/bash
export FT_USER=$USER
id "$FT_USER" -nG | tr ' ' ','
