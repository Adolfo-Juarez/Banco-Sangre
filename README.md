# Banco de sangre
Este programa verifica si un donador cumple con los requisitos para donar sangre.
## Version 1.1.0
Se implementó la verificación de compatibilidad de sangre de los posible receptores según el cuadro siguiente
    <table style="width: 100%; text-align: left; margin-left: auto; margin-right: auto;"
      border="1">
      <tbody align="center">
        <tr>
          <td rowspan="10">D<br>
            o<br>
            n<br>
            a<br>
            d<br>
            o<br>
            r</td>
          <td colspan="9">Receptor</td>
        </tr>
        <tr>
          <td><br>
          </td>
          <td>O-<br>
          </td>
          <td>O+<br>
          </td>
          <td>A-<br>
          </td>
          <td>A+<br>
          </td>
          <td>B-<br>
          </td>
          <td>B+<br>
          </td>
          <td>AB-<br>
          </td>
          <td>AB+<br>
          </td>
        </tr>
        <tr>
          <td>O-<br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
        </tr>
        <tr>
          <td>O+<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
        </tr>
        <tr>
          <td>A-<br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
        </tr>
        <tr>
          <td>A+<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td style="width: 47.7833px;">✅<br>
          </td>
          <td style="width: 33.5167px;"><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
        </tr>
        <tr>
          <td>B-<br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
        </tr>
        <tr>
          <td>B+<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td><br>
          </td>
        </tr>
        <tr>
          <td>AB-<br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
          <td>✅<br>
          </td>
          <td><br>
          </td>
        </tr>
        <tr>
          <td>AB+<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
          <td>✅<br>
          </td>
        </tr>
      </tbody>
    </table>
## Version 1.0.0
Verifica si el candidato cumple con:
- Edad
- Presión arterial
- Tiempo de Ayuno
- Tiempo de Sueño