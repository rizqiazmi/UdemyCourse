#include "Swarm.h"

namespace apple {

Swarm::Swarm(){
    m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
    delete [] m_pParticles;
}

}
