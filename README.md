# GameAudioGame

Game Audio Game es un videojuego en desarrollo
(dentro del contexto del doctorado en
Ciencia y Tecnología de quien realizó este trabajo)
que tiene como principal foco la enseñanza de
varios aspectos de la música adaptativa, tales como
la composición, la implementación y el desarrollo
de audio para videojuegos. Es decir, del
funcionamiento de la música en el contexto de los
videojuegos. Gracias a la experiencia docente en
el ámbito universitario, se arribó a la conclusión de
que no existe mejor forma de ejemplificar
diferentes formas de encarar el trabajo sino por
medio de un juego. El problema radica en que,
como el videojuego es un medio tan amplio, es
difícil que todas las personas que se encuentran
cursando una misma materia hayan jugado a los
mismos juegos, o que todas las personas
encuentren familiares todos los diferentes géneros
y tipos de videojuegos. Existen casos incluso, de
personas que, al cursar una materia de diseño
sonoro y musical de videojuegos, se están
acercando por primera vez al medio. Debido a
esto, se decidió crear una herramienta para que
todas las personas puedan, en un inicio, acceder a
las mismas ejemplificaciones. El prototipo creció
con las versiones hasta incorporar un espacio
donde se podrá aprender programación de audio,
implementación y composición musical.

Funcionamiento
El juego, del género de resolución de puzzles, se
encuentra dirigida a estudiantes de cursos
relacionados con audio y música para videojuegos.
El objetivo principal del juego es abordar
problemas musicales, desafiando a las y los
jugadores a tomar decisiones relacionadas con la
selección de fragmentos, capas y secciones
musicales que se adapten a situaciones específicas
del juego.
Las reglas del juego involucran el movimiento del
personaje con las teclas W, A, S y D. Los
segmentos musicales se almacenan en cajas que
contienen información sobre el tipo de estrategia
musical utilizada y la capa o sección musical
correspondiente. Se presentan cuatro estrategias
musicales: Resecuenciación Horizontal por
5 Se puede acceder a un video del estado actual en el
siguiente link: https://bit.ly/GameAudioGame
crossfades, Resecuenciación Horizontal por
transiciones, Remezcla vertical aditiva y Remezcla
vertical por intercambio.
La mecánica central del juego implica colocar
las cajas en plataformas cuadradas
correspondientes y, posteriormente, acercarse a
plataformas circulares más pequeñas que
funcionan como botones para escuchar cómo se
ejecuta la música. El juego se desarrolla a través de
niveles progresivos que introducen gradualmente
las diferentes estrategias de musicalización. La
retroalimentación en el juego se centra en la
adquisición de habilidades para comprender y
aplicar estas estrategias, en lugar de recompensas o
puntajes. El juego se lanzará inicialmente en PC y
posteriormente en dispositivos móviles. Una vez el
juego se termine de desarrollar, los estudiantes
tendrán la oportunidad de experimentar con las
diferentes estrategias de composición musical
interactiva y, posteriormente, de aplicar estos
conocimientos en el software Wwise y Unreal
Engine para componer y ajustar música en
contextos de juegos.


 Contenido Educativo
El contenido educativo del cual el juego hará
especial énfasis en enseñar serán las cuatro
estrategias de composición musicales propuestas
por Winnifred Phillips (A composer's Guide to
Game Music, 2017). La primera de ellas es la
resecuenciación horizontal por crossfades, que
permite una transición suave entre secciones
musicales mediante la aplicación de "crossfades" o
fundidos cruzados. Esta técnica garantiza que la
música fluya de manera continua y evita cortes
bruscos en momentos de cambio musical. La
segunda estrategia, la resecuenciación horizontal
por transiciones, se utiliza cuando las músicas que
deben unirse son muy diferentes entre sí y no se
puede transicionar directamente con crossfades. En
estos casos, se inserta un breve segmento musical,
muchas veces de percusión, que sirve como puente
entre las secciones musicales dispares, facilitando
una transición más suave. La tercera estrategia es
la remezcla vertical aditiva. En esta táctica, se
superponen y suman capas musicales dependiendo
del estado del juego. Todas las capas musicales se
reproducen en conjunto, permitiendo una
6 El repositorio se encuentra de libre acceso. Link:
https://github.com/LauDic/GameAudioGame
AdAA2023-xx
combinación compleja de elementos musicales.
Esta estrategia se emplea cuando el estado del
juego requiere una música rica y llena, y todas las
capas son compatibles entre sí. La cuarta
estrategia, la remezcla vertical por intercambio, es
similar a la remezcla vertical aditiva, pero con una
diferencia clave. En esta táctica, se agregan y
superponen capas musicales según el estado del
juego, pero no todas las capas se pueden escuchar
simultáneamente debido a diferencias tímbricas,
musicales o rítmicas. El juego selecciona y
reproduce las capas musicales apropiadas según el
estado del juego y la situación, manteniendo
coherencia musical y evitando superposiciones no
deseadas. Cada una de estas estrategias musicales
proporciona una herramienta única para abordar
los desafíos musicales en el juego, permitiendo a
quien compone elegir entre ellas para componer las
músicas de los juegos a trabajar. Estas estrategias
añaden profundidad y complejidad a la experiencia
musical interactiva, ofreciendo a los jugadores una
variedad de enfoques musicales para adaptarse a
las necesidades de la jugabilidad y la narrativa.
C. Game Audio Game en la clase
Game Audio Game desempeñará un papel
fundamental en el entorno educativo. En primera
instancia, el juego se introducirá como una
herramienta didáctica para enseñar a los alumnos y
alumnas las diversas estrategias de musicalización
interactiva. A través de la experiencia de juego, los
estudiantes adquirirán un conocimiento práctico y
aplicado sobre cómo abordar problemas musicales
en el contexto de los videojuegos.
Posteriormente, a medida que avancen las clases,
los estudiantes se embarcarán en un proceso
creativo. Cada alumno y alumna se enfrentará al
desafío de componer una nueva banda sonora
utilizando las estrategias aprendidas durante la fase
inicial. Este ejercicio fomentará la aplicación
práctica de las estrategias musicales en un contexto
de producción musical específico.
Una vez que hayan realizado la nueva banda
sonora, se brindará a las y los estudiantes acceso a
la sesión middleware Wwise. Esta etapa se
enfocará en la implementación de la música en un
entorno de juego interactivo. Los estudiantes
aprenderán a integrar sus composiciones en el
juego y optimizar la experiencia auditiva del juego.
Finalmente, las y los estudiantes tendrán la
oportunidad de llevar sus conocimientos al
siguiente nivel. Se les proporcionará acceso al
repositorio del juego en Git, lo que les permitirá
descargar el proyecto y abrirlo en el motor de juego
Unreal. En esta fase, tendrán la capacidad de
modificar los niveles del juego según lo consideren
pertinente, aplicando las estrategias de
musicalización y programación de audio
aprendidas en el transcurso del curso.
Este enfoque educativo se basa en una progresión
lógica y futura, comenzando con la comprensión
teórica y práctica de las estrategias musicales a
través del juego "Game Audio Game", avanzando
hacia la creación y la implementación de música en
el contexto de los videojuegos, y culminando con
la capacidad de personalizar y mejorar la
experiencia del juego a través del desarrollo y la
programación de audio. Este enfoque integral
brindará a las y los estudiantes una comprensión
profunda de la intersección entre música y
videojuegos y las habilidades necesarias en la
industria del desarrollo de juegos.
D. Game Audio Game y su aporte.
Como acabamos de ver, el juego presentado
adscribe a cada uno de los puntos clave
mencionados en el apartado número II. D. A
continuación se detallará como se ha propuesto
trabajar con cada uno de los apartados en Game
Audio Game.

1) Involucración Activa:
Al ser un juego de resolución de puzzles, las y los
estudiantes/jugadores deberán resolver problemas
musicales de forma activa. Deberán tomar
decisiones para cambiar el diseño del juego,
seleccionar nuevos fragmentos musicales y aplicar
las estrategias aprendidas en clase de acorde a sus
propios conocimientos en composición musical.

2) Adaptación del Aprendizaje a cada Estilo de
Persona:
El método utilizado en clase permitirá que cada
persona pueda moldear el aprendizaje tanto teórico
como práctico en función de las habilidades que
posee, como los intereses educativos. Al poder
dedicarle más tiempo a la sección que desee dentro
del desarrollo de la música para videojuego.

3) Conexiones Emocionales Mediante la adopción de
una identidad:
Al crear un nuevo universo musical y sonoro por
parte de cada persona, podrá involucrarse
personalmente en la adaptación propia, plasmando
su visión artística sobre el mundo del juego.

4) Manipulación de Herramientas y Tecnologías
Significativas:
Al manipular, la música, integración musical y
programación, aprendiendo a utilizar en el proceso
Unreal y Wwise, aprenden a manipular todas las
etapas de la producción de música para
videojuegos. Terminando la materia con un
proyecto que les servirá de portafolio.

5) Elaboración de un Orden de Resolución de
Problemas Escalonado: El juego introduce
gradualmente las diferentes estrategias de
musicalización a través de niveles progresivos, lo
que permite a los estudiantes/jugadores abordar
problemas musicales de manera escalonada.

6) Diseño de Dificultades Justas en el Orden de
Resolución de Problemas:
El juego presenta desafíos que se vuelven
progresivamente más complejos a medida que los
estudiantes avanzan, lo que asegura que las
dificultades sean justas y adaptadas al nivel de
competencia de cada persona.

7) Fomento de la Repetición de Habilidades:
Los estudiantes/jugadores pueden repetir niveles y
ejercicios para mejorar sus habilidades en la
composición musical interactiva.

8) Dosificación de la Información de Acuerdo a las
Necesidades:
El juego proporciona información y ejemplos de
las estrategias de composición musical de manera
dosificada y adaptada a las etapas de aprendizaje,
evitando sobrecargar a los estudiantes con
información innecesaria.

9) Desarrollo de Ecosistemas de Resolución de
Problemas Simplificados:
El juego ofrece un entorno simplificado, pero
efectivo para que las y los estudiantes/jugadores
practiquen y apliquen las estrategias de
composición musical, sin necesitar de mediar un
juego complejo y basto, donde las oportunidades
de practicar cada estrategia necesitan ser forzadas.

10) Creación de Espacios Seguros:
El juego proporciona un entorno de aprendizaje
seguro donde los estudiantes pueden experimentar
y cometer errores sin consecuencias negativas en
todas las etapas del desarrollo de la música para
videojuegos.

11) Confección de Contextos Prácticos de Aplicación
de Conocimientos:
Los estudiantes aplican directamente las
estrategias de composición musical aprendidas en
el juego a través de la creación de bandas sonoras
y su implementación en los entornos de trabajo
profesionales, Wwise y Unreal, creando el
contexto profesional.

12) Elaboración de Contextos de los Aprendizajes en un
Sistema Más Amplio:
Al aprender todo el proceso de trabajo, al terminar
la materia las y los alumnos poseerán conocimiento
de la cadena como un sistema más grande y
complejo, brindando mayor significado a cada
etapa.

13) Generación de significados mediante experiencias
significativas que puedan formar modelos creados en la
mente:


La forma de trabajo ofrece una experiencia
significativas al permitir a las y los
estudiantes/jugadores experimentar la música
adaptativa en videojuegos de manera práctica,
siendo generalmente el primer acercamiento a un
medio que han experimentado durante toda su
vida, pero que nunca antes habían trabajado de
forma académica en sus formaciones. 

