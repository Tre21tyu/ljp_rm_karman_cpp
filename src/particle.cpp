struct Particle {
    float x, y;
    float vx, vy;
};

void updateParticle(Particle& p, float dt) {
   p.x += p.vx * dt;
   p.y += p.vy * dt;
}
